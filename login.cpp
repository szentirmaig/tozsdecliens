#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::belepes(QByteArray uzenet)
{
    if(uzenet=="BELEPES helyes")
    {
        close();
        emit mainwindownyitas();
    }
    else if(uzenet=="BELEPES rossz jelszo")
    {
        QMessageBox::warning(this,tr("Hiba!"),tr("Nem megfelelő a jelszó!"));
        return;
    }
    else if(uzenet=="BELEPES rossz felhasznalonev")
    {
        QMessageBox::warning(this,tr("Hiba!"),tr("A megadott felhasználó név nem létezik!"));
        return;
    }
}

void Login::on_pushButton_ok_clicked()
{
    QString felhasznalonev=ui->lineEdit_felhasznalonev->text();
    QString jelszo=ui->lineEdit_jelszo->text();

    emit belepesellenorzes(felhasznalonev,jelszo);
}

void Login::on_pushButton_regisztracio_clicked()
{
    emit signupnyitas();
}

void Login::on_pushButton_kilepes_clicked()
{
    close();
}
