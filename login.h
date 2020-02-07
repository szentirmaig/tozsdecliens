#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>


namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    void connecttoDatabase();
    void belepes(QByteArray uzenet);

private slots:
    void on_pushButton_ok_clicked();
    void on_pushButton_regisztracio_clicked();
    void on_pushButton_kilepes_clicked();

signals:
    void belepesellenorzes(QString,QString);
    void mainwindownyitas();
    void signupnyitas();

private:
    Ui::Login *ui;

};

#endif // LOGIN_H
