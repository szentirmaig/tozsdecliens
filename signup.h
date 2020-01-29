#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QRegExpValidator>


namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_pushButton_megse_clicked();
    void on_pushButton_ok_clicked();
    void checkLineEdits();

signals:
    void textChanged();
    void regisztracio(QString,QString,QString,QString,QString);

private:
    Ui::SignUp *ui;
    QRegExp regex_email, regex_telefonszam, regex_felhasznalonev;
};

#endif // SIGNUP_H
