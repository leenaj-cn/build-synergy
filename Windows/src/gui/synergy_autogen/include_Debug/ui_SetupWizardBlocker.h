/********************************************************************************
** Form generated from reading UI file 'SetupWizardBlocker.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPWIZARDBLOCKER_H
#define UI_SETUPWIZARDBLOCKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SetupWizardBlocker
{
public:
    QLabel *label_Image;
    QLabel *label_Title;
    QLabel *label_HelpInfo;
    QPushButton *m_pButtonCancel;
    QPushButton *m_pButtonSupport;

    void setupUi(QDialog *SetupWizardBlocker)
    {
        if (SetupWizardBlocker->objectName().isEmpty())
            SetupWizardBlocker->setObjectName(QString::fromUtf8("SetupWizardBlocker"));
        SetupWizardBlocker->resize(720, 580);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetupWizardBlocker->sizePolicy().hasHeightForWidth());
        SetupWizardBlocker->setSizePolicy(sizePolicy);
        SetupWizardBlocker->setMinimumSize(QSize(720, 580));
        SetupWizardBlocker->setMaximumSize(QSize(720, 580));
        SetupWizardBlocker->setBaseSize(QSize(720, 580));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        SetupWizardBlocker->setFont(font);
        SetupWizardBlocker->setContextMenuPolicy(Qt::NoContextMenu);
        SetupWizardBlocker->setWindowOpacity(1.000000000000000);
        label_Image = new QLabel(SetupWizardBlocker);
        label_Image->setObjectName(QString::fromUtf8("label_Image"));
        label_Image->setGeometry(QRect(278, 87, 165, 165));
        label_Image->setPixmap(QPixmap(QString::fromUtf8(":/res/image/setupBlocker.png")));
        label_Image->setScaledContents(true);
        label_Title = new QLabel(SetupWizardBlocker);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(0, 273, 720, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        label_Title->setFont(font1);
        label_Title->setText(QString::fromUtf8("Test header"));
        label_Title->setTextFormat(Qt::RichText);
        label_Title->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_Title->setWordWrap(true);
        label_HelpInfo = new QLabel(SetupWizardBlocker);
        label_HelpInfo->setObjectName(QString::fromUtf8("label_HelpInfo"));
        label_HelpInfo->setGeometry(QRect(153, 321, 455, 150));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setWeight(50);
        label_HelpInfo->setFont(font2);
        label_HelpInfo->setTextFormat(Qt::RichText);
        label_HelpInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_HelpInfo->setWordWrap(true);
        m_pButtonCancel = new QPushButton(SetupWizardBlocker);
        m_pButtonCancel->setObjectName(QString::fromUtf8("m_pButtonCancel"));
        m_pButtonCancel->setGeometry(QRect(642, 540, 71, 25));
        m_pButtonCancel->setFont(font2);
        m_pButtonSupport = new QPushButton(SetupWizardBlocker);
        m_pButtonSupport->setObjectName(QString::fromUtf8("m_pButtonSupport"));
        m_pButtonSupport->setGeometry(QRect(500, 540, 131, 25));
        m_pButtonSupport->setFont(font2);

        retranslateUi(SetupWizardBlocker);

        QMetaObject::connectSlotsByName(SetupWizardBlocker);
    } // setupUi

    void retranslateUi(QDialog *SetupWizardBlocker)
    {
        SetupWizardBlocker->setWindowTitle(QCoreApplication::translate("SetupWizardBlocker", "Setup Synergy", nullptr));
        label_Image->setText(QString());
        label_HelpInfo->setText(QCoreApplication::translate("SetupWizardBlocker", "large text test large text test large text test", nullptr));
        m_pButtonCancel->setText(QCoreApplication::translate("SetupWizardBlocker", "Cancel", nullptr));
        m_pButtonSupport->setText(QCoreApplication::translate("SetupWizardBlocker", "Online support", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupWizardBlocker: public Ui_SetupWizardBlocker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPWIZARDBLOCKER_H
