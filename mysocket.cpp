#include "mysocket.h"




MySocket::MySocket(QObject *parent) : QObject(parent)
{

}

void MySocket::Test()
{
    socket = new QTcpSocket(this);

    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(socket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));

    qDebug() << "connecting...";

    socket->connectToHost("127.0.0.1",1234);

    if(!socket->waitForConnected(1000))
    {
        qDebug() << "Error: " << socket->errorString();
    }
}

void MySocket::connected()
{
    qDebug() << "Connected!";

    login=new Login();
    login->show();

    connect(login,SIGNAL(belepesellenorzes(QString,QString)),this,SLOT(belepesellenorzes(QString, QString)));
    connect(login,SIGNAL(mainwindownyitas()),this,SLOT(mainwindownyitas()));
    connect(login,SIGNAL(signupnyitas()),this,SLOT(signupnyitas()));
}

void MySocket::disconnected()
{
    qDebug() << "Disconnected!";
}

void MySocket::bytesWritten(qint64 bytes)
{
    qDebug() << "We wrote: " << bytes;
}

void MySocket::readyRead()
{
    qDebug() << "Reading...";

    QByteArray Data = socket->readAll();

    if(Data.startsWith("BELEPES "))
    {
        login->belepes(Data);
    }
    if(Data.startsWith("REGISZTRACIO "))
    {
        emit regisztraciovalasz(Data);
    }
}

void MySocket::belepesellenorzes(const QString &felhasznalonev, const QString &jelszo)
{
    QByteArray data("BELEPES " + felhasznalonev.toLocal8Bit() + " " + jelszo.toLocal8Bit());
    socket->write(data);
}

void MySocket::mainwindownyitas()
{
    MainWindow *w=new MainWindow();
    w->show();
}

void MySocket::signupnyitas()
{
    SignUp *signup=new SignUp();
    signup->show();
    connect(signup,SIGNAL(regisztracioellenorzes(QString,QString,QString,QString,QString)),this,SLOT(regisztracioellenorzes(QString,QString,QString,QString,QString)));
    connect(this,SIGNAL(regisztraciovalasz(QByteArray)),signup,SLOT(regisztracio(QByteArray)));
}

void MySocket::regisztracioellenorzes(const QString &felhasznalonev, const QString &nev, const QString &emailcim, const QString &telefonszam, const QString &jelszo)
{
    QByteArray data("REGISZTRACIO " + felhasznalonev.toLocal8Bit() + "," +  nev.toLocal8Bit() + "," + emailcim.toLocal8Bit() + "," + telefonszam.toLocal8Bit() + "," + jelszo.toLocal8Bit());
    socket->write(data);
}
