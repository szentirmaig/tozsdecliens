/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_felhasznalonev;
    QLineEdit *lineEdit_felhasznalonev;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_nev;
    QLineEdit *lineEdit_nev;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_email_cim;
    QLineEdit *lineEdit_email_cim;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_telefonszam;
    QLineEdit *lineEdit_telefonszam;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_jelszo;
    QLineEdit *lineEdit_jelszo;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_jelszo_megerositese;
    QLineEdit *lineEdit_jelszo_megerositese;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_megse;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(330, 250);
        SignUp->setMinimumSize(QSize(330, 250));
        SignUp->setMaximumSize(QSize(330, 250));
        verticalLayout_8 = new QVBoxLayout(SignUp);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_felhasznalonev = new QLabel(SignUp);
        label_felhasznalonev->setObjectName(QString::fromUtf8("label_felhasznalonev"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_felhasznalonev->setFont(font);
        label_felhasznalonev->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_felhasznalonev);

        lineEdit_felhasznalonev = new QLineEdit(SignUp);
        lineEdit_felhasznalonev->setObjectName(QString::fromUtf8("lineEdit_felhasznalonev"));

        verticalLayout->addWidget(lineEdit_felhasznalonev);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_nev = new QLabel(SignUp);
        label_nev->setObjectName(QString::fromUtf8("label_nev"));
        label_nev->setFont(font);
        label_nev->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_nev);

        lineEdit_nev = new QLineEdit(SignUp);
        lineEdit_nev->setObjectName(QString::fromUtf8("lineEdit_nev"));

        verticalLayout_2->addWidget(lineEdit_nev);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_email_cim = new QLabel(SignUp);
        label_email_cim->setObjectName(QString::fromUtf8("label_email_cim"));
        label_email_cim->setFont(font);
        label_email_cim->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_email_cim);

        lineEdit_email_cim = new QLineEdit(SignUp);
        lineEdit_email_cim->setObjectName(QString::fromUtf8("lineEdit_email_cim"));
        lineEdit_email_cim->setInputMethodHints(Qt::ImhNone);

        verticalLayout_3->addWidget(lineEdit_email_cim);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_telefonszam = new QLabel(SignUp);
        label_telefonszam->setObjectName(QString::fromUtf8("label_telefonszam"));
        label_telefonszam->setFont(font);
        label_telefonszam->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_telefonszam);

        lineEdit_telefonszam = new QLineEdit(SignUp);
        lineEdit_telefonszam->setObjectName(QString::fromUtf8("lineEdit_telefonszam"));
        lineEdit_telefonszam->setInputMethodHints(Qt::ImhNone);

        verticalLayout_4->addWidget(lineEdit_telefonszam);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_jelszo = new QLabel(SignUp);
        label_jelszo->setObjectName(QString::fromUtf8("label_jelszo"));
        label_jelszo->setFont(font);
        label_jelszo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_jelszo);

        lineEdit_jelszo = new QLineEdit(SignUp);
        lineEdit_jelszo->setObjectName(QString::fromUtf8("lineEdit_jelszo"));
        lineEdit_jelszo->setEchoMode(QLineEdit::Password);

        verticalLayout_5->addWidget(lineEdit_jelszo);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_jelszo_megerositese = new QLabel(SignUp);
        label_jelszo_megerositese->setObjectName(QString::fromUtf8("label_jelszo_megerositese"));
        label_jelszo_megerositese->setFont(font);
        label_jelszo_megerositese->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_jelszo_megerositese);

        lineEdit_jelszo_megerositese = new QLineEdit(SignUp);
        lineEdit_jelszo_megerositese->setObjectName(QString::fromUtf8("lineEdit_jelszo_megerositese"));
        lineEdit_jelszo_megerositese->setEchoMode(QLineEdit::Password);

        verticalLayout_6->addWidget(lineEdit_jelszo_megerositese);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout->addLayout(verticalLayout_7);

        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label->setWordWrap(true);
        label->setMargin(0);

        horizontalLayout->addWidget(label);


        verticalLayout_8->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_2->setContentsMargins(20, -1, 20, -1);
        pushButton_megse = new QPushButton(SignUp);
        pushButton_megse->setObjectName(QString::fromUtf8("pushButton_megse"));

        horizontalLayout_2->addWidget(pushButton_megse);

        pushButton_ok = new QPushButton(SignUp);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        horizontalLayout_2->addWidget(pushButton_ok);


        verticalLayout_8->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(lineEdit_felhasznalonev, lineEdit_nev);
        QWidget::setTabOrder(lineEdit_nev, lineEdit_email_cim);
        QWidget::setTabOrder(lineEdit_email_cim, lineEdit_telefonszam);
        QWidget::setTabOrder(lineEdit_telefonszam, lineEdit_jelszo);
        QWidget::setTabOrder(lineEdit_jelszo, lineEdit_jelszo_megerositese);
        QWidget::setTabOrder(lineEdit_jelszo_megerositese, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_megse);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Regisztr\303\241ci\303\263", nullptr));
        label_felhasznalonev->setText(QApplication::translate("SignUp", "Felhaszn\303\241l\303\263n\303\251v: ", nullptr));
        label_nev->setText(QApplication::translate("SignUp", "Teljes n\303\251v: ", nullptr));
        label_email_cim->setText(QApplication::translate("SignUp", "Email c\303\255m: ", nullptr));
        label_telefonszam->setText(QApplication::translate("SignUp", "Mobiltelefon:", nullptr));
        lineEdit_telefonszam->setInputMask(QString());
        label_jelszo->setText(QApplication::translate("SignUp", "Jelsz\303\263: ", nullptr));
        label_jelszo_megerositese->setText(QApplication::translate("SignUp", "Jelsz\303\263 meger\305\221s\303\255t\303\251se: ", nullptr));
        lineEdit_jelszo_megerositese->setText(QString());
        label->setText(QApplication::translate("SignUp", "A jelsz\303\263nak legal\303\241bb 8 karakteresnek kell lennie, \303\251s szerepeljenek bet\305\261k \303\251s sz\303\241mok is!", nullptr));
        pushButton_megse->setText(QApplication::translate("SignUp", "M\303\251gse", nullptr));
        pushButton_ok->setText(QApplication::translate("SignUp", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
