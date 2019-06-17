#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QVariant>
#include <QSqlError>
#include <QSqlQuery>
#include <QVector>
#include <QPluginLoader>

#include "author.h"
#include "user.h"

static bool connectDb()
{
    QPluginLoader loader;
    loader.setFileName("/Users/xmly/Qt5.12.1/5.12.1/clang_64/plugins/sqldrivers/libqsqlmysql_debug.dylib");

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("ireader");
    db.setUserName("root");
    db.setPassword("123456");
    if (!db.open()) {
        QMessageBox::critical(nullptr, QObject::tr("无法打开数据库"),
            QObject::tr("无法建立数据库连接，请检查数据库是否打开\n\n"), QMessageBox::Cancel);
        return false;
    }
    return true;
}

//static Author* loginAuthor(const QString username, const QString password) {

//    QSqlQuery query;
//    query.prepare("SELECT * FROM `auther` WHERE USERNAME = :username"
//                    "AND PASSWORD = :password");
//    query.bindValue(":username", username);
//    query.bindValue(":password", password);
//    query.exec();
//    if (query.next()) {
//        QString res = query.value(0).toString();
//        return new Author;
//    }
//    return nullptr;
//}


//static User* loginUser(const QString username, const QString password) {

//    QSqlQuery query;
//    query.prepare("SELECT * FROM `user` WHERE USERNAME = :username"
//                    "AND PASSWORD = :password");
//    query.bindValue(":username", username);
//    query.bindValue(":password", password);
//    query.exec();
//    if (query.next()) {
//        QString res = query.value(0).toString();
//        return new User;
//    }
//    return nullptr;
//}


//static QVector<Author> findFavAuthors(const quint64 uid) {
//    QVector<Author> authors;
//    QSqlQuery query;
//    query.prepare("SELECT * FROM author"
//                  "JOIN favorite_author ON author.ID = favorite_author.AUTHOR_ID"
//                  "WHERE"
//                  "USER_ID = :id");
//    query.bindValue(":username", uid);
//    query.exec();
//    while (query.next()) {
//        QString res = query.value(0).toString();
//        authors.push_back(author);
//    }
//    return authors;
//}



//static Book* findBookByName(const QString name) {

//    QSqlQuery query;
//    query.prepare("SELECT * FROM `book` WHERE NAME = :name");
//    query.bindValue(":username", name);
//    query.exec();
//    if (query.next()) {
//        QString res = query.value(0).toString();
//        return new Book;
//    }
//    return nullptr;
//}

//static QVector<Book> findFavBooks(const quint64 uid) {
//    QVector<Book> books;
//    QSqlQuery query;
//    query.prepare("SELECT * FROM book"
//                  "JOIN collection_book ON book.ID = collection_book.BOOK_ID"
//                  "WHERE"
//                  "USER_ID = :id");
//    query.bindValue(":id", uid);
//    query.exec();
//    while (query.next()) {
//        QString res = query.value(0).toString();
//        books.push_back(book);
//    }
//    return books;
//}

#endif
