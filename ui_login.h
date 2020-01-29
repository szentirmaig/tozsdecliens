/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_felhasznalonev;
    QLineEdit *lineEdit_felhasznalonev;
    QVBoxLayout *verticalLayout;
    QLabel *label_jelszo;
    QLineEdit *lineEdit_jelszo;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_kilepes;
    QPushButton *pushButton_regisztracio;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(260, 140);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(260, 140));
        Login->setMaximumSize(QSize(260, 140));
        verticalLayout_3 = new QVBoxLayout(Login);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_felhasznalonev = new QLabel(Login);
        label_felhasznalonev->setObjectName(QString::fromUtf8("label_felhasznalonev"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_felhasznalonev->setFont(font);
        label_felhasznalonev->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_felhasznalonev);

        lineEdit_felhasznalonev = new QLineEdit(Login);
        lineEdit_felhasznalonev->setObjectName(QString::fromUtf8("lineEdit_felhasznalonev"));

        verticalLayout_2->addWidget(lineEdit_felhasznalonev);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_jelszo = new QLabel(Login);
        label_jelszo->setObjectName(QString::fromUtf8("label_jelszo"));
        label_jelszo->setFont(font);
        label_jelszo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_jelszo);

        lineEdit_jelszo = new QLineEdit(Login);
        lineEdit_jelszo->setObjectName(QString::fromUtf8("lineEdit_jelszo"));
        lineEdit_jelszo->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_jelszo);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_kilepes = new QPushButton(Login);
        pushButton_kilepes->setObjectName(QString::fromUtf8("pushButton_kilepes"));
        sizePolicy.setHeightForWidth(pushButton_kilepes->sizePolicy().hasHeightForWidth());
        pushButton_kilepes->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_kilepes);

        pushButton_regisztracio = new QPushButton(Login);
        pushButton_regisztracio->setObjectName(QString::fromUtf8("pushButton_regisztracio"));
        sizePolicy.setHeightForWidth(pushButton_regisztracio->sizePolicy().hasHeightForWidth());
        pushButton_regisztracio->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_regisztracio);

        pushButton_ok = new QPushButton(Login);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        sizePolicy.setHeightForWidth(pushButton_ok->sizePolicy().hasHeightForWidth());
        pushButton_ok->setSizePolicy(sizePolicy);
        pushButton_ok->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(pushButton_ok);


        verticalLayout_3->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(lineEdit_felhasznalonev, lineEdit_jelszo);
        QWidget::setTabOrder(lineEdit_jelszo, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_kilepes);
        QWidget::setTabOrder(pushButton_kilepes, pushButton_regisztracio);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Bejelentkez\303\251s", nullptr));
        label_felhasznalonev->setText(QApplication::translate("Login", "Felhaszn\303\241l\303\263n\303\251v: ", nullptr));
        label_jelszo->setText(QApplication::translate("Login", "Jelsz\303\263: ", nullptr));
        pushButton_kilepes->setText(QApplication::translate("Login", "Kil\303\251p\303\251s", nullptr));
        pushButton_regisztracio->setText(QApplication::translate("Login", "Regisztr\303\241ci\303\263", nullptr));
        pushButton_ok->setText(QApplication::translate("Login", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
