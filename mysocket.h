#ifndef MYSOCKET_H
#define MYSOCKET_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QTextCodec>
#include "login.h"
#include "mainwindow.h"
#include "signup.h"

class MySocket : public QObject
{
    Q_OBJECT
public:
    explicit MySocket(QObject *parent = nullptr);

    void Test();
signals:
    void regisztraciovalasz(QByteArray);

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void belepesellenorzes(const QString &felhasznalonev, const QString &jelszo);
    void mainwindownyitas();
    void signupnyitas();
    void regisztracioellenorzes(const QString &felhasznalonev, const QString &nev, const QString &emailcim, const QString &telefonszam, const QString &jelszo);

private:
    QTcpSocket *socket;
    Login *login;
};

#endif // MYSOCKET_H
