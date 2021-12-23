/********************************************************************************
** Form generated from reading UI file 'SetupWizardBase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPWIZARDBASE_H
#define UI_SETUPWIZARDBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SetupWizardBase
{
public:
    QLabel *label_Image;
    QLabel *label_Title;
    QLabel *label_Name;
    QLineEdit *m_pLineEditName;
    QLabel *label_HelpTitle;
    QLabel *label_HelpInfo;
    QPushButton *m_pButtonApply;
    QLabel *label_ErrorMessage;

    void setupUi(QDialog *SetupWizardBase)
    {
        if (SetupWizardBase->objectName().isEmpty())
            SetupWizardBase->setObjectName(QString::fromUtf8("SetupWizardBase"));
        SetupWizardBase->resize(720, 552);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetupWizardBase->sizePolicy().hasHeightForWidth());
        SetupWizardBase->setSizePolicy(sizePolicy);
        SetupWizardBase->setMinimumSize(QSize(720, 552));
        SetupWizardBase->setMaximumSize(QSize(720, 552));
        SetupWizardBase->setBaseSize(QSize(720, 552));
        SetupWizardBase->setContextMenuPolicy(Qt::NoContextMenu);
        SetupWizardBase->setWindowOpacity(1.000000000000000);
        label_Image = new QLabel(SetupWizardBase);
        label_Image->setObjectName(QString::fromUtf8("label_Image"));
        label_Image->setGeometry(QRect(270, 70, 181, 161));
        label_Image->setPixmap(QPixmap(QString::fromUtf8(":/res/image/welcome.png")));
        label_Title = new QLabel(SetupWizardBase);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(270, 253, 261, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setBold(true);
        font.setWeight(75);
        label_Title->setFont(font);
        label_Title->setText(QString::fromUtf8("<html><head/><body><p style=\"font-size:18px\">Name your computer</p></body></html>"));
        label_Title->setTextFormat(Qt::RichText);
        label_Name = new QLabel(SetupWizardBase);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(184, 294, 111, 16));
        label_Name->setFont(font);
        label_Name->setTextFormat(Qt::RichText);
        m_pLineEditName = new QLineEdit(SetupWizardBase);
        m_pLineEditName->setObjectName(QString::fromUtf8("m_pLineEditName"));
        m_pLineEditName->setGeometry(QRect(300, 293, 230, 20));
        m_pLineEditName->setMinimumSize(QSize(230, 20));
        m_pLineEditName->setMaxLength(255);
        label_HelpTitle = new QLabel(SetupWizardBase);
        label_HelpTitle->setObjectName(QString::fromUtf8("label_HelpTitle"));
        label_HelpTitle->setGeometry(QRect(132, 354, 481, 16));
        label_HelpTitle->setFont(font);
        label_HelpTitle->setTextFormat(Qt::RichText);
        label_HelpInfo = new QLabel(SetupWizardBase);
        label_HelpInfo->setObjectName(QString::fromUtf8("label_HelpInfo"));
        label_HelpInfo->setGeometry(QRect(193, 380, 311, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_HelpInfo->setFont(font1);
        label_HelpInfo->setTextFormat(Qt::RichText);
        m_pButtonApply = new QPushButton(SetupWizardBase);
        m_pButtonApply->setObjectName(QString::fromUtf8("m_pButtonApply"));
        m_pButtonApply->setGeometry(QRect(650, 510, 56, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setBold(false);
        font2.setWeight(50);
        m_pButtonApply->setFont(font2);
        label_ErrorMessage = new QLabel(SetupWizardBase);
        label_ErrorMessage->setObjectName(QString::fromUtf8("label_ErrorMessage"));
        label_ErrorMessage->setGeometry(QRect(300, 320, 391, 16));
        label_ErrorMessage->setStyleSheet(QString::fromUtf8("color: #EC4C47; \n"
"font-size: 13px; \n"
"font-family: Arial; \n"
"font-weight: bold;"));

        retranslateUi(SetupWizardBase);

        QMetaObject::connectSlotsByName(SetupWizardBase);
    } // setupUi

    void retranslateUi(QDialog *SetupWizardBase)
    {
        SetupWizardBase->setWindowTitle(QCoreApplication::translate("SetupWizardBase", "Setup Synergy", nullptr));
        label_Image->setText(QString());
        label_Name->setText(QCoreApplication::translate("SetupWizardBase", "<html><head/><body><p style=\"font-size:13px;\">Computer name</p></body></html>", nullptr));
        label_HelpTitle->setText(QCoreApplication::translate("SetupWizardBase", "<html><head/><body><p style=\"font-size: 13px;\">Call your computer something short and meaningful, but it must have: </p></body></html>", nullptr));
        label_HelpInfo->setText(QCoreApplication::translate("SetupWizardBase", "<html><head/><body><ul style=\"list-style-type:none; font-size: 13px;\"><li style=\"line-height:140%\">- A different name from other computers </li><li style=\"line-height:140%\">- Only these special characters _ - .</li><li style=\"line-height:140%\">- No spaces </li><li style=\"line-height:140%\">- Only english characters and numbers</li></body></html>", nullptr));
        m_pButtonApply->setText(QCoreApplication::translate("SetupWizardBase", "Apply", nullptr));
        label_ErrorMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SetupWizardBase: public Ui_SetupWizardBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPWIZARDBASE_H
