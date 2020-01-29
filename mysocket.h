#ifndef MYSOCKET_H
#define MYSOCKET_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QAbstractSocket>
#include "login.h"

class MySocket : public QObject
{
    Q_OBJECT
public:
    explicit MySocket(QObject *parent = nullptr);

    void Test();
signals:

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void belepesellenorzes(const QString &felhasznalonev, const QString &jelszo);

private:
    QTcpSocket *socket;
    Login *login;
};

#endif // MYSOCKET_H
