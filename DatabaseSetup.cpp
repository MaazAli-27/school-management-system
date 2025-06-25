#include "DatabaseSetup.h"
#include <QCoreApplication>
#include <QString>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include<QCryptographicHash>

void createAdminUser(QSqlDatabase& db) {
    // Ensure the datab
    if (!db.isOpen()) {
        qDebug() << "Database is not open!";
        return;
    }
    QString adminName = "Admin";  // Admin email/ID
    QString adminRole = "admin";               // Role
    QString adminPassword = "admin123";        // Default password (Change as needed)

    // Check if admin already exists
    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT * FROM login_credentials WHERE user_id = :user_id AND role = 'admin'");
    checkQuery.bindValue(":user_id", adminName);

    if (!checkQuery.exec()) {
        qDebug() << "Error checking admin existence:" << checkQuery.lastError().text();
        return;
    }

    if (checkQuery.next()) {
        qDebug() << "Admin user already exists!";
        return;  // Exit function if admin is already present
    }

    // Insert admin into login_credentials
    QSqlQuery insertQuery(db);
    insertQuery.prepare("INSERT INTO login_credentials (user_id, role, password) VALUES (:user_id, :role, :password)");
    insertQuery.bindValue(":user_id", adminName);
    insertQuery.bindValue(":role", adminRole);
    insertQuery.bindValue(":password", adminPassword);  // If using hashed password, hash it here

    if (insertQuery.exec()) {
        qDebug() << "Admin user inserted successfully!";
    } else {
        qDebug() << "Error inserting admin user:" << insertQuery.lastError().text();
    }
}

void setupDatabase() {
    QString databaseName = "school_management_system";
    // Step 1: Connect to MySQL Server (without specifying a database)
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("Maaz-Ali1234");
    db.setConnectOptions("MYSQL_OPT_SSL_MODE=DISABLED");

    if (!db.open()) {
        qDebug() << "Failed to connect to MySQL Server:" << db.lastError().text();
        return;
    }
    qDebug() << "Connected to MySQL server successfully!";

    // Step 2: Check if the database exists
    QSqlQuery checkDbQuery(db);
    checkDbQuery.prepare("SELECT SCHEMA_NAME FROM INFORMATION_SCHEMA.SCHEMATA WHERE SCHEMA_NAME = :dbName");
    checkDbQuery.bindValue(":dbName", databaseName);

    if (!checkDbQuery.exec()) {
        qDebug() << "Error checking database existence:" << checkDbQuery.lastError().text();
        db.close();
        return;
    }

    if (!checkDbQuery.next()) {
        // Database does not exist, create it
        qDebug() << "Database" << databaseName << "does not exist. Creating it...";
        QSqlQuery createDbQuery(db);
        if (!createDbQuery.exec("CREATE DATABASE " + databaseName)) {
            qDebug() << "Error creating database:" << createDbQuery.lastError().text();
            db.close();
            return;
        }
        qDebug() << "Database" << databaseName << "created successfully!";
    } else {
        qDebug() << "Database" << databaseName << "already exists.";
    }

    // Step 3: Reconnect to the database
    db.close();
    db.setDatabaseName(databaseName);

    if (!db.open()) {
        qDebug() << "Failed to connect to database" << databaseName << ":" << db.lastError().text();
        return;
    }
    qDebug() << "Connected to database" << databaseName << "successfully!";

    // Step 4: Ensure MySQL uses `mysql_native_password`
    QSqlQuery authQuery(db);
    authQuery.prepare("ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'Maaz-Ali1234'");
    if (!authQuery.exec()) {
        qDebug() << "Failed to set authentication method:" << authQuery.lastError().text();
    }

    // Step 5: Create required tables
    QSqlQuery query(db);

    struct Table {
        QString name;
        QString schema;
    };

    QList<Table> tables = {
        {"students", "CREATE TABLE IF NOT EXISTS students (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100) NOT NULL, password VARCHAR(255) NOT NULL, class VARCHAR(50) DEFAULT NULL)"},
        {"teachers", "CREATE TABLE IF NOT EXISTS teachers (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100) NOT NULL, password VARCHAR(255) NOT NULL, subject VARCHAR(100) DEFAULT NULL)"},

        {"admins", "CREATE TABLE IF NOT EXISTS admins (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100) NOT NULL, email VARCHAR(100) NOT NULL UNIQUE, password VARCHAR(255) NOT NULL)"},
        {"class_schedule", "CREATE TABLE IF NOT EXISTS class_schedule (id INT AUTO_INCREMENT PRIMARY KEY, class_name VARCHAR(50) NOT NULL, teacher_name VARCHAR(100) NOT NULL,subject VARCHAR(100) NOT NULL, day ENUM('Monday','Tuesday','Wednesday','Thursday','Friday','Saturday') NOT NULL, time_start TIME NOT NULL, time_end TIME NOT NULL, room VARCHAR(20) NOT NULL)"},
        {"exam_schedule", "CREATE TABLE IF NOT EXISTS exam_schedule (id INT AUTO_INCREMENT PRIMARY KEY, subject VARCHAR(100) NOT NULL, exam_date DATE NOT NULL, time_start TIME NOT NULL, time_end TIME NOT NULL)"},
        {"login_credentials", "CREATE TABLE IF NOT EXISTS login_credentials (id INT AUTO_INCREMENT PRIMARY KEY, user_id VARCHAR(50) NOT NULL, role ENUM('admin','teacher','student') NOT NULL, password VARCHAR(64) DEFAULT NULL)"},
        {"student_attendance", "CREATE TABLE IF NOT EXISTS student_attendance (id INT AUTO_INCREMENT PRIMARY KEY, student_id INT NOT NULL, date DATE NOT NULL, status ENUM('Present','Absent') NOT NULL, class_name VARCHAR(50) NOT NULL, FOREIGN KEY (student_id) REFERENCES students(id) ON DELETE CASCADE)"},
        {"student_reports", "CREATE TABLE IF NOT EXISTS student_reports (id INT AUTO_INCREMENT PRIMARY KEY, student_id INT NOT NULL, exam_name VARCHAR(100) NOT NULL, marks_obtained INT NOT NULL, total_marks INT NOT NULL, grade VARCHAR(5) DEFAULT NULL, remarks TEXT, FOREIGN KEY (student_id) REFERENCES students(id) ON DELETE CASCADE)"},
        {"teacher_attendance", "CREATE TABLE IF NOT EXISTS teacher_attendance (id INT AUTO_INCREMENT PRIMARY KEY, teacher_id INT NOT NULL, date DATE NOT NULL, status ENUM('Present','Absent') NOT NULL, course_name VARCHAR(100) NOT NULL, FOREIGN KEY (teacher_id) REFERENCES teachers(id) ON DELETE CASCADE)"},
        {"exam_management", "CREATE TABLE IF NOT EXISTS exam_management (id INT AUTO_INCREMENT PRIMARY KEY, class_name VARCHAR(50) NOT NULL, subject VARCHAR(100) NOT NULL, invigilator VARCHAR(100) NOT NULL, exam_date DATE NOT NULL, start_time TIME NOT NULL, end_time TIME NOT NULL, room VARCHAR(20) NOT NULL)"},
        {"exam_results","CREATE TABLE IF NOT EXISTS exam_results (id INT PRIMARY KEY AUTO_INCREMENT, student_id INT NOT NULL, student_name VARCHAR(100) NOT NULL, class_name VARCHAR(50) NOT NULL, subject VARCHAR(100) NOT NULL, marks_obtained INT NOT NULL, total_marks INT NOT NULL, exam_date DATE, teacher_id INT)"}
    };


    for (const Table& table : tables) {
        if (!query.exec(table.schema)) {
            qDebug() << "Error creating table" << table.name << ":" << query.lastError().text();
        } else {
            qDebug() << "Table" << table.name << "checked/created successfully.";
        }
    }
    createAdminUser(db);
    db.close();
    qDebug() << "Database setup completed.";
}

