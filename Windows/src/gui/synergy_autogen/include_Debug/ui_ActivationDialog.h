/********************************************************************************
** Form generated from reading UI file 'ActivationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVATIONDIALOG_H
#define UI_ACTIVATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActivationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QTextEdit *m_pTextEditSerialKey;
    QWidget *m_trialWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *m_trialLabel;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActivationDialog)
    {
        if (ActivationDialog->objectName().isEmpty())
            ActivationDialog->setObjectName(QString::fromUtf8("ActivationDialog"));
        ActivationDialog->resize(410, 211);
        verticalLayout = new QVBoxLayout(ActivationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ActivationDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_5 = new QLabel(ActivationDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_5);

        m_pTextEditSerialKey = new QTextEdit(ActivationDialog);
        m_pTextEditSerialKey->setObjectName(QString::fromUtf8("m_pTextEditSerialKey"));
        m_pTextEditSerialKey->setEnabled(true);
        m_pTextEditSerialKey->setTabChangesFocus(true);
        m_pTextEditSerialKey->setAcceptRichText(false);

        verticalLayout->addWidget(m_pTextEditSerialKey);

        m_trialWidget = new QWidget(ActivationDialog);
        m_trialWidget->setObjectName(QString::fromUtf8("m_trialWidget"));
        horizontalLayout_5 = new QHBoxLayout(m_trialWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 0, 0, 8);
        m_trialLabel = new QLabel(m_trialWidget);
        m_trialLabel->setObjectName(QString::fromUtf8("m_trialLabel"));
        m_trialLabel->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"font-weight: 700;\n"
"padding: 3px 5px;\n"
"border-radius: 3px;\n"
"background-color: #EC4C47;\n"
"color: #ffffff;\n"
"top: 3px;"));
        m_trialLabel->setOpenExternalLinks(true);

        horizontalLayout_5->addWidget(m_trialLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addWidget(m_trialWidget);

        buttonBox = new QDialogButtonBox(ActivationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ActivationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ActivationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ActivationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ActivationDialog);
    } // setupUi

    void retranslateUi(QDialog *ActivationDialog)
    {
        ActivationDialog->setWindowTitle(QCoreApplication::translate("ActivationDialog", "Activate Synergy", nullptr));
        label->setText(QCoreApplication::translate("ActivationDialog", "Serial key", nullptr));
        label_5->setText(QCoreApplication::translate("ActivationDialog", "<html><head/><body><p>This can be found on your <a href=\"https://symless.com/synergy/account-login\"><span style=\" text-decoration: none; color: #4285F4;\">account</span></a> page.</p></body></html>", nullptr));
        m_pTextEditSerialKey->setHtml(QCoreApplication::translate("ActivationDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        m_trialLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ActivationDialog: public Ui_ActivationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATIONDIALOG_H
