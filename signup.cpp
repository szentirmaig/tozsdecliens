#include "signup.h"
#include "ui_signup.h"



SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);

    regex_felhasznalonev.setPattern("^[a-z0-9_-]{3,16}$"); //minimum3, maximum16 karakter
    regex_telefonszam.setPattern("^[0-9]{9}$");
    regex_email.setPattern("^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]+$");

    QRegExpValidator *validfelhasznaloven=new QRegExpValidator(regex_felhasznalonev,this);
    QRegExpValidator *validtelefonszam=new QRegExpValidator(regex_telefonszam,this);
    QRegExpValidator *validemail=new QRegExpValidator(regex_email,this);

    ui->lineEdit_felhasznalonev->setValidator(validfelhasznaloven);
    ui->lineEdit_telefonszam->setValidator(validtelefonszam);
    ui->lineEdit_email_cim->setValidator(validemail);

    ui->pushButton_ok->setEnabled(false);

    ui->lineEdit_telefonszam->setInputMask("+36 00/000-0000;_");

    connect(ui->lineEdit_nev, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits()));
    connect(ui->lineEdit_jelszo, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits()));
    connect(ui->lineEdit_email_cim, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits()));
    connect(ui->lineEdit_telefonszam, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits()));
    connect(ui->lineEdit_felhasznalonev, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits()));
    connect(ui->lineEdit_jelszo_megerositese, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits()));
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_megse_clicked()
{
    close();
}

void SignUp::on_pushButton_ok_clicked()
{
    QString felhasznalonev=ui->lineEdit_felhasznalonev->text();
    QString nev=ui->lineEdit_nev->text();
    QString emailcim=ui->lineEdit_email_cim->text();
    QString telefonszam=ui->lineEdit_telefonszam->text();
    QString jelszo=ui->lineEdit_jelszo->text();
    QString jelszomegerositese=ui->lineEdit_jelszo_megerositese->text();

    QRegularExpression validjelszo("((?=.*\\d)(?=.*[a-z]).{8,20})");
    QRegularExpressionMatch match = validjelszo.match(ui->lineEdit_jelszo->text());
    if(!match.hasMatch())
    {
        QMessageBox::warning(this,tr("Hiba!"), tr("A jelszónak legalább 8 karakteresnek kell lennie, és szerepeljenek betűk és számok is."));
        return;
    }

    if(jelszo!=jelszomegerositese)
    {
        QMessageBox::warning(this,tr("Hiba!"), tr("A megadott jelszavak nem egyeznek!"));
        return;
    }

    emit regisztracio(felhasznalonev,nev,emailcim,telefonszam,jelszo);

//    QSqlQuery insertaccount;
//    insertaccount.prepare("INSERT INTO felhasznalok VALUES(?,?,?,?,?)");
//    insertaccount.addBindValue(felhasznalonev);
//    insertaccount.addBindValue(nev);
//    insertaccount.addBindValue(emailcim);
//    insertaccount.addBindValue(telefonszam);
//    insertaccount.addBindValue(jelszo);
//    if(!insertaccount.exec())
//    {
//        QMessageBox::warning(this,tr("Hiba!"),tr("Nem tudjuk létrehozni a felhasználói fiókot!"));
//        qDebug()<<insertaccount.lastError();
//        return;
//    }
//    close();
}

void SignUp::checkLineEdits()
{
    bool ok = !ui->lineEdit_nev->text().isEmpty() && !ui->lineEdit_jelszo->text().isEmpty() && !ui->lineEdit_email_cim->text().isEmpty() && !ui->lineEdit_telefonszam->text().isEmpty() && !ui->lineEdit_felhasznalonev->text().isEmpty() && !ui->lineEdit_jelszo_megerositese->text().isEmpty();
    if (regex_email.exactMatch(ui->lineEdit_email_cim->text()))
    {
        ui->pushButton_ok->setEnabled (ok);
    }
    else
    {
        ui->pushButton_ok->setEnabled (false);
    }
}
