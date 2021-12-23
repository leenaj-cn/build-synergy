/********************************************************************************
** Form generated from reading UI file 'SettingsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOGBASE_H
#define UI_SETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialogBase
{
public:
    QGridLayout *gridLayout_5;
    QLabel *m_pLabelGroupNetwork;
    QSpacerItem *verticalSpacer_5;
    QLabel *m_pLabelGroupAdvanced;
    QSpacerItem *verticalSpacer_4;
    QFrame *m_pGroupLog1;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *m_pCheckBoxLogToFile;
    QComboBox *m_pComboLogLevel;
    QLabel *m_pLabel_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *m_pLabelLogPath;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *m_pLineEditLogFilename;
    QPushButton *m_pButtonBrowseLog;
    QLabel *m_pLabelGroupScope;
    QLabel *m_pLabelGroupLog;
    QSpacerItem *verticalSpacer_3;
    QFrame *m_pGroupAdvanced;
    QGridLayout *gridLayout_3;
    QComboBox *m_pComboLanguage;
    QCheckBox *m_pCheckBoxLanguageSync;
    QLabel *m_pLabel_27;
    QLabel *m_pLabelElevate;
    QComboBox *m_pComboElevate;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QFrame *m_pGroupSecurity;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *m_pCheckBoxEnableCrypto;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_pLabelKeyLength;
    QComboBox *m_pComboBoxKeyLength;
    QHBoxLayout *horizontalLayout_6;
    QLabel *m_pLabelCertificate;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *m_pLineEditCertificatePath;
    QPushButton *m_pPushButtonBrowseCert;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *m_pPushButtonRegenCert;
    QFrame *m_pGroupScope;
    QGridLayout *gridLayout_2;
    QRadioButton *m_pRadioUserScope;
    QRadioButton *m_pRadioSystemScope;
    QLabel *m_labelAdminRightsMessage;
    QDialogButtonBox *buttonBox;
    QGridLayout *m_pGridLayoutNetwork;
    QCheckBox *m_pCheckBoxAutoConfig;
    QLabel *m_pLabelInstallBonjour;
    QSpacerItem *verticalSpacer;
    QFrame *m_pGroupBoxCommon;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *m_pLabelComputerName;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_pLineEditScreenName;
    QLabel *m_pLabelNameError;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_pLabel_20;
    QSpinBox *m_pSpinBoxPort;
    QLabel *m_pLabel_21;
    QLineEdit *m_pLineEditInterface;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *m_pCheckBoxAutoHide;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *m_pCheckBoxMinimizeToTray;
    QCheckBox *m_pCheckBoxPreventSleep;

    void setupUi(QDialog *SettingsDialogBase)
    {
        if (SettingsDialogBase->objectName().isEmpty())
            SettingsDialogBase->setObjectName(QString::fromUtf8("SettingsDialogBase"));
        SettingsDialogBase->resize(404, 620);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsDialogBase->sizePolicy().hasHeightForWidth());
        SettingsDialogBase->setSizePolicy(sizePolicy);
        SettingsDialogBase->setMinimumSize(QSize(400, 620));
        gridLayout_5 = new QGridLayout(SettingsDialogBase);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(5);
        gridLayout_5->setContentsMargins(11, 11, 11, -1);
        m_pLabelGroupNetwork = new QLabel(SettingsDialogBase);
        m_pLabelGroupNetwork->setObjectName(QString::fromUtf8("m_pLabelGroupNetwork"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pLabelGroupNetwork->sizePolicy().hasHeightForWidth());
        m_pLabelGroupNetwork->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(m_pLabelGroupNetwork, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_5, 8, 0, 1, 1);

        m_pLabelGroupAdvanced = new QLabel(SettingsDialogBase);
        m_pLabelGroupAdvanced->setObjectName(QString::fromUtf8("m_pLabelGroupAdvanced"));
        sizePolicy1.setHeightForWidth(m_pLabelGroupAdvanced->sizePolicy().hasHeightForWidth());
        m_pLabelGroupAdvanced->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(m_pLabelGroupAdvanced, 12, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_4, 4, 0, 1, 1);

        m_pGroupLog1 = new QFrame(SettingsDialogBase);
        m_pGroupLog1->setObjectName(QString::fromUtf8("m_pGroupLog1"));
        m_pGroupLog1->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}\n"
""));
        m_pGroupLog1->setFrameShape(QFrame::StyledPanel);
        m_pGroupLog1->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_pGroupLog1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(7);
        gridLayout->setContentsMargins(-1, 15, -1, 15);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        m_pCheckBoxLogToFile = new QCheckBox(m_pGroupLog1);
        m_pCheckBoxLogToFile->setObjectName(QString::fromUtf8("m_pCheckBoxLogToFile"));

        gridLayout->addWidget(m_pCheckBoxLogToFile, 0, 0, 1, 1);

        m_pComboLogLevel = new QComboBox(m_pGroupLog1);
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->setObjectName(QString::fromUtf8("m_pComboLogLevel"));

        gridLayout->addWidget(m_pComboLogLevel, 0, 3, 1, 1);

        m_pLabel_3 = new QLabel(m_pGroupLog1);
        m_pLabel_3->setObjectName(QString::fromUtf8("m_pLabel_3"));
        sizePolicy1.setHeightForWidth(m_pLabel_3->sizePolicy().hasHeightForWidth());
        m_pLabel_3->setSizePolicy(sizePolicy1);
        m_pLabel_3->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(m_pLabel_3, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        m_pLabelLogPath = new QLabel(m_pGroupLog1);
        m_pLabelLogPath->setObjectName(QString::fromUtf8("m_pLabelLogPath"));
        sizePolicy1.setHeightForWidth(m_pLabelLogPath->sizePolicy().hasHeightForWidth());
        m_pLabelLogPath->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(m_pLabelLogPath);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        m_pLineEditLogFilename = new QLineEdit(m_pGroupLog1);
        m_pLineEditLogFilename->setObjectName(QString::fromUtf8("m_pLineEditLogFilename"));
        m_pLineEditLogFilename->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pLineEditLogFilename->sizePolicy().hasHeightForWidth());
        m_pLineEditLogFilename->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(m_pLineEditLogFilename);

        m_pButtonBrowseLog = new QPushButton(m_pGroupLog1);
        m_pButtonBrowseLog->setObjectName(QString::fromUtf8("m_pButtonBrowseLog"));
        m_pButtonBrowseLog->setEnabled(false);
        m_pButtonBrowseLog->setCursor(QCursor(Qt::PointingHandCursor));
        m_pButtonBrowseLog->setStyleSheet(QString::fromUtf8("margin: 0px; padding: 0px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/64x64/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pButtonBrowseLog->setIcon(icon);
        m_pButtonBrowseLog->setIconSize(QSize(20, 13));
        m_pButtonBrowseLog->setFlat(true);

        horizontalLayout_4->addWidget(m_pButtonBrowseLog);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 4);


        gridLayout_5->addWidget(m_pGroupLog1, 6, 0, 1, 1);

        m_pLabelGroupScope = new QLabel(SettingsDialogBase);
        m_pLabelGroupScope->setObjectName(QString::fromUtf8("m_pLabelGroupScope"));
        sizePolicy1.setHeightForWidth(m_pLabelGroupScope->sizePolicy().hasHeightForWidth());
        m_pLabelGroupScope->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(m_pLabelGroupScope, 9, 0, 1, 1);

        m_pLabelGroupLog = new QLabel(SettingsDialogBase);
        m_pLabelGroupLog->setObjectName(QString::fromUtf8("m_pLabelGroupLog"));
        sizePolicy1.setHeightForWidth(m_pLabelGroupLog->sizePolicy().hasHeightForWidth());
        m_pLabelGroupLog->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(m_pLabelGroupLog, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_3, 11, 0, 1, 1);

        m_pGroupAdvanced = new QFrame(SettingsDialogBase);
        m_pGroupAdvanced->setObjectName(QString::fromUtf8("m_pGroupAdvanced"));
        sizePolicy.setHeightForWidth(m_pGroupAdvanced->sizePolicy().hasHeightForWidth());
        m_pGroupAdvanced->setSizePolicy(sizePolicy);
        m_pGroupAdvanced->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}\n"
""));
        m_pGroupAdvanced->setFrameShape(QFrame::StyledPanel);
        m_pGroupAdvanced->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(m_pGroupAdvanced);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_pComboLanguage = new QComboBox(m_pGroupAdvanced);
        m_pComboLanguage->setObjectName(QString::fromUtf8("m_pComboLanguage"));

        gridLayout_3->addWidget(m_pComboLanguage, 0, 1, 1, 1);

        m_pCheckBoxLanguageSync = new QCheckBox(m_pGroupAdvanced);
        m_pCheckBoxLanguageSync->setObjectName(QString::fromUtf8("m_pCheckBoxLanguageSync"));

        gridLayout_3->addWidget(m_pCheckBoxLanguageSync, 1, 0, 1, 3);

        m_pLabel_27 = new QLabel(m_pGroupAdvanced);
        m_pLabel_27->setObjectName(QString::fromUtf8("m_pLabel_27"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pLabel_27->sizePolicy().hasHeightForWidth());
        m_pLabel_27->setSizePolicy(sizePolicy3);
        m_pLabel_27->setMinimumSize(QSize(75, 0));

        gridLayout_3->addWidget(m_pLabel_27, 0, 0, 1, 1);

        m_pLabelElevate = new QLabel(m_pGroupAdvanced);
        m_pLabelElevate->setObjectName(QString::fromUtf8("m_pLabelElevate"));
        sizePolicy1.setHeightForWidth(m_pLabelElevate->sizePolicy().hasHeightForWidth());
        m_pLabelElevate->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(m_pLabelElevate, 3, 0, 1, 1);

        m_pComboElevate = new QComboBox(m_pGroupAdvanced);
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->setObjectName(QString::fromUtf8("m_pComboElevate"));

        gridLayout_3->addWidget(m_pComboElevate, 3, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 4, 0, 1, 1);


        gridLayout_5->addWidget(m_pGroupAdvanced, 13, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);

        m_pGroupSecurity = new QFrame(SettingsDialogBase);
        m_pGroupSecurity->setObjectName(QString::fromUtf8("m_pGroupSecurity"));
        m_pGroupSecurity->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}\n"
""));
        m_pGroupSecurity->setFrameShape(QFrame::StyledPanel);
        m_pGroupSecurity->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(m_pGroupSecurity);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 9, -1, 9);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        m_pCheckBoxEnableCrypto = new QCheckBox(m_pGroupSecurity);
        m_pCheckBoxEnableCrypto->setObjectName(QString::fromUtf8("m_pCheckBoxEnableCrypto"));
        m_pCheckBoxEnableCrypto->setEnabled(true);

        horizontalLayout_5->addWidget(m_pCheckBoxEnableCrypto);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        m_pLabelKeyLength = new QLabel(m_pGroupSecurity);
        m_pLabelKeyLength->setObjectName(QString::fromUtf8("m_pLabelKeyLength"));
        sizePolicy1.setHeightForWidth(m_pLabelKeyLength->sizePolicy().hasHeightForWidth());
        m_pLabelKeyLength->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(m_pLabelKeyLength);

        m_pComboBoxKeyLength = new QComboBox(m_pGroupSecurity);
        m_pComboBoxKeyLength->addItem(QString());
        m_pComboBoxKeyLength->addItem(QString());
        m_pComboBoxKeyLength->addItem(QString());
        m_pComboBoxKeyLength->setObjectName(QString::fromUtf8("m_pComboBoxKeyLength"));

        horizontalLayout_5->addWidget(m_pComboBoxKeyLength);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        m_pLabelCertificate = new QLabel(m_pGroupSecurity);
        m_pLabelCertificate->setObjectName(QString::fromUtf8("m_pLabelCertificate"));
        sizePolicy1.setHeightForWidth(m_pLabelCertificate->sizePolicy().hasHeightForWidth());
        m_pLabelCertificate->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(m_pLabelCertificate);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        m_pLineEditCertificatePath = new QLineEdit(m_pGroupSecurity);
        m_pLineEditCertificatePath->setObjectName(QString::fromUtf8("m_pLineEditCertificatePath"));
        m_pLineEditCertificatePath->setMinimumSize(QSize(0, 0));

        horizontalLayout_6->addWidget(m_pLineEditCertificatePath);

        m_pPushButtonBrowseCert = new QPushButton(m_pGroupSecurity);
        m_pPushButtonBrowseCert->setObjectName(QString::fromUtf8("m_pPushButtonBrowseCert"));
        m_pPushButtonBrowseCert->setCursor(QCursor(Qt::PointingHandCursor));
        m_pPushButtonBrowseCert->setStyleSheet(QString::fromUtf8("margin: 0px; padding: 0px;"));
        m_pPushButtonBrowseCert->setIcon(icon);
        m_pPushButtonBrowseCert->setIconSize(QSize(20, 13));
        m_pPushButtonBrowseCert->setFlat(true);

        horizontalLayout_6->addWidget(m_pPushButtonBrowseCert);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        m_pPushButtonRegenCert = new QPushButton(m_pGroupSecurity);
        m_pPushButtonRegenCert->setObjectName(QString::fromUtf8("m_pPushButtonRegenCert"));

        horizontalLayout_7->addWidget(m_pPushButtonRegenCert);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout_5->addWidget(m_pGroupSecurity, 3, 0, 1, 1);

        m_pGroupScope = new QFrame(SettingsDialogBase);
        m_pGroupScope->setObjectName(QString::fromUtf8("m_pGroupScope"));
        m_pGroupScope->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}\n"
""));
        m_pGroupScope->setFrameShape(QFrame::StyledPanel);
        m_pGroupScope->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(m_pGroupScope);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(-1, 15, -1, 15);
        m_pRadioUserScope = new QRadioButton(m_pGroupScope);
        m_pRadioUserScope->setObjectName(QString::fromUtf8("m_pRadioUserScope"));

        gridLayout_2->addWidget(m_pRadioUserScope, 0, 0, 1, 1);

        m_pRadioSystemScope = new QRadioButton(m_pGroupScope);
        m_pRadioSystemScope->setObjectName(QString::fromUtf8("m_pRadioSystemScope"));
        m_pRadioSystemScope->setChecked(true);

        gridLayout_2->addWidget(m_pRadioSystemScope, 0, 1, 1, 1);

        m_labelAdminRightsMessage = new QLabel(m_pGroupScope);
        m_labelAdminRightsMessage->setObjectName(QString::fromUtf8("m_labelAdminRightsMessage"));
        m_labelAdminRightsMessage->setEnabled(false);
        sizePolicy1.setHeightForWidth(m_labelAdminRightsMessage->sizePolicy().hasHeightForWidth());
        m_labelAdminRightsMessage->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_labelAdminRightsMessage->setFont(font);

        gridLayout_2->addWidget(m_labelAdminRightsMessage, 1, 0, 1, 2);


        gridLayout_5->addWidget(m_pGroupScope, 10, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SettingsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout_5->addWidget(buttonBox, 20, 0, 1, 1);

        m_pGridLayoutNetwork = new QGridLayout();
        m_pGridLayoutNetwork->setObjectName(QString::fromUtf8("m_pGridLayoutNetwork"));
        m_pGridLayoutNetwork->setHorizontalSpacing(0);
        m_pGridLayoutNetwork->setVerticalSpacing(6);
        m_pGridLayoutNetwork->setContentsMargins(0, 1, -1, -1);
        m_pCheckBoxAutoConfig = new QCheckBox(SettingsDialogBase);
        m_pCheckBoxAutoConfig->setObjectName(QString::fromUtf8("m_pCheckBoxAutoConfig"));
        m_pCheckBoxAutoConfig->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_pCheckBoxAutoConfig->sizePolicy().hasHeightForWidth());
        m_pCheckBoxAutoConfig->setSizePolicy(sizePolicy4);

        m_pGridLayoutNetwork->addWidget(m_pCheckBoxAutoConfig, 0, 0, 1, 1);

        m_pLabelInstallBonjour = new QLabel(SettingsDialogBase);
        m_pLabelInstallBonjour->setObjectName(QString::fromUtf8("m_pLabelInstallBonjour"));
        sizePolicy4.setHeightForWidth(m_pLabelInstallBonjour->sizePolicy().hasHeightForWidth());
        m_pLabelInstallBonjour->setSizePolicy(sizePolicy4);
        m_pLabelInstallBonjour->setTextFormat(Qt::RichText);

        m_pGridLayoutNetwork->addWidget(m_pLabelInstallBonjour, 0, 1, 1, 1);


        gridLayout_5->addLayout(m_pGridLayoutNetwork, 18, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer, 19, 0, 1, 1);

        m_pGroupBoxCommon = new QFrame(SettingsDialogBase);
        m_pGroupBoxCommon->setObjectName(QString::fromUtf8("m_pGroupBoxCommon"));
        m_pGroupBoxCommon->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}\n"
""));
        m_pGroupBoxCommon->setFrameShape(QFrame::StyledPanel);
        m_pGroupBoxCommon->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(m_pGroupBoxCommon);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 17, -1, 17);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_pLabelComputerName = new QLabel(m_pGroupBoxCommon);
        m_pLabelComputerName->setObjectName(QString::fromUtf8("m_pLabelComputerName"));
        sizePolicy1.setHeightForWidth(m_pLabelComputerName->sizePolicy().hasHeightForWidth());
        m_pLabelComputerName->setSizePolicy(sizePolicy1);
        m_pLabelComputerName->setMinimumSize(QSize(75, 0));

        horizontalLayout->addWidget(m_pLabelComputerName);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_pLineEditScreenName = new QLineEdit(m_pGroupBoxCommon);
        m_pLineEditScreenName->setObjectName(QString::fromUtf8("m_pLineEditScreenName"));
        m_pLineEditScreenName->setEnabled(true);
        m_pLineEditScreenName->setMaxLength(255);

        horizontalLayout->addWidget(m_pLineEditScreenName);


        verticalLayout_3->addLayout(horizontalLayout);

        m_pLabelNameError = new QLabel(m_pGroupBoxCommon);
        m_pLabelNameError->setObjectName(QString::fromUtf8("m_pLabelNameError"));
        sizePolicy3.setHeightForWidth(m_pLabelNameError->sizePolicy().hasHeightForWidth());
        m_pLabelNameError->setSizePolicy(sizePolicy3);
        m_pLabelNameError->setStyleSheet(QString::fromUtf8("color: #EC4C47; \n"
"font-size: 13px; \n"
"font-family: Arial; \n"
"font-weight: bold;"));
        m_pLabelNameError->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(m_pLabelNameError);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        m_pLabel_20 = new QLabel(m_pGroupBoxCommon);
        m_pLabel_20->setObjectName(QString::fromUtf8("m_pLabel_20"));
        sizePolicy1.setHeightForWidth(m_pLabel_20->sizePolicy().hasHeightForWidth());
        m_pLabel_20->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(m_pLabel_20);

        m_pSpinBoxPort = new QSpinBox(m_pGroupBoxCommon);
        m_pSpinBoxPort->setObjectName(QString::fromUtf8("m_pSpinBoxPort"));
        m_pSpinBoxPort->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_pSpinBoxPort->sizePolicy().hasHeightForWidth());
        m_pSpinBoxPort->setSizePolicy(sizePolicy5);
        m_pSpinBoxPort->setMaximum(65535);
        m_pSpinBoxPort->setValue(24800);

        horizontalLayout_2->addWidget(m_pSpinBoxPort);

        m_pLabel_21 = new QLabel(m_pGroupBoxCommon);
        m_pLabel_21->setObjectName(QString::fromUtf8("m_pLabel_21"));
        sizePolicy1.setHeightForWidth(m_pLabel_21->sizePolicy().hasHeightForWidth());
        m_pLabel_21->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(m_pLabel_21);

        m_pLineEditInterface = new QLineEdit(m_pGroupBoxCommon);
        m_pLineEditInterface->setObjectName(QString::fromUtf8("m_pLineEditInterface"));
        m_pLineEditInterface->setEnabled(true);

        horizontalLayout_2->addWidget(m_pLineEditInterface);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        m_pCheckBoxAutoHide = new QCheckBox(m_pGroupBoxCommon);
        m_pCheckBoxAutoHide->setObjectName(QString::fromUtf8("m_pCheckBoxAutoHide"));

        horizontalLayout_3->addWidget(m_pCheckBoxAutoHide);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        m_pCheckBoxMinimizeToTray = new QCheckBox(m_pGroupBoxCommon);
        m_pCheckBoxMinimizeToTray->setObjectName(QString::fromUtf8("m_pCheckBoxMinimizeToTray"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_pCheckBoxMinimizeToTray->sizePolicy().hasHeightForWidth());
        m_pCheckBoxMinimizeToTray->setSizePolicy(sizePolicy6);
        m_pCheckBoxMinimizeToTray->setMinimumSize(QSize(0, 0));
        m_pCheckBoxMinimizeToTray->setMaximumSize(QSize(16777215, 16777215));
        m_pCheckBoxMinimizeToTray->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(m_pCheckBoxMinimizeToTray);


        verticalLayout_3->addLayout(horizontalLayout_3);

        m_pCheckBoxPreventSleep = new QCheckBox(m_pGroupBoxCommon);
        m_pCheckBoxPreventSleep->setObjectName(QString::fromUtf8("m_pCheckBoxPreventSleep"));

        verticalLayout_3->addWidget(m_pCheckBoxPreventSleep);


        gridLayout_5->addWidget(m_pGroupBoxCommon, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        m_pLabel_3->setBuddy(m_pComboLogLevel);
        m_pLabel_27->setBuddy(m_pComboLanguage);
        m_pLabelComputerName->setBuddy(m_pLineEditScreenName);
        m_pLabel_20->setBuddy(m_pSpinBoxPort);
        m_pLabel_21->setBuddy(m_pLineEditInterface);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SettingsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialogBase, SLOT(reject()));

        m_pComboElevate->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialogBase)
    {
        SettingsDialogBase->setWindowTitle(QCoreApplication::translate("SettingsDialogBase", "Preferences", nullptr));
        m_pLabelGroupNetwork->setText(QCoreApplication::translate("SettingsDialogBase", "Security", nullptr));
        m_pLabelGroupAdvanced->setText(QCoreApplication::translate("SettingsDialogBase", "Advanced", nullptr));
        m_pCheckBoxLogToFile->setText(QCoreApplication::translate("SettingsDialogBase", "Log to file", nullptr));
        m_pComboLogLevel->setItemText(0, QCoreApplication::translate("SettingsDialogBase", "Info", nullptr));
        m_pComboLogLevel->setItemText(1, QCoreApplication::translate("SettingsDialogBase", "Debug", nullptr));
        m_pComboLogLevel->setItemText(2, QCoreApplication::translate("SettingsDialogBase", "Debug1", nullptr));
        m_pComboLogLevel->setItemText(3, QCoreApplication::translate("SettingsDialogBase", "Debug2", nullptr));

        m_pLabel_3->setText(QCoreApplication::translate("SettingsDialogBase", "&Level", nullptr));
        m_pLabelLogPath->setText(QCoreApplication::translate("SettingsDialogBase", "Log path", nullptr));
        m_pButtonBrowseLog->setText(QString());
        m_pLabelGroupScope->setText(QCoreApplication::translate("SettingsDialogBase", "Use settings profile from", nullptr));
        m_pLabelGroupLog->setText(QCoreApplication::translate("SettingsDialogBase", "Logs", nullptr));
        m_pCheckBoxLanguageSync->setText(QCoreApplication::translate("SettingsDialogBase", "&Use server's keyboard language on this machine", nullptr));
        m_pLabel_27->setText(QCoreApplication::translate("SettingsDialogBase", "User interface language", nullptr));
        m_pLabelElevate->setText(QCoreApplication::translate("SettingsDialogBase", "Elevate privileges", nullptr));
        m_pComboElevate->setItemText(0, QCoreApplication::translate("SettingsDialogBase", "As Needed", nullptr));
        m_pComboElevate->setItemText(1, QCoreApplication::translate("SettingsDialogBase", "Always", nullptr));
        m_pComboElevate->setItemText(2, QCoreApplication::translate("SettingsDialogBase", "Never", nullptr));

#if QT_CONFIG(tooltip)
        m_pComboElevate->setToolTip(QCoreApplication::translate("SettingsDialogBase", "Specify when the Synergy service should run at an elevated privilege level", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pCheckBoxEnableCrypto->setText(QCoreApplication::translate("SettingsDialogBase", "Enable &TLS encryption", nullptr));
        m_pLabelKeyLength->setText(QCoreApplication::translate("SettingsDialogBase", "Key length", nullptr));
        m_pComboBoxKeyLength->setItemText(0, QCoreApplication::translate("SettingsDialogBase", "1024", nullptr));
        m_pComboBoxKeyLength->setItemText(1, QCoreApplication::translate("SettingsDialogBase", "2048", nullptr));
        m_pComboBoxKeyLength->setItemText(2, QCoreApplication::translate("SettingsDialogBase", "4096", nullptr));

        m_pComboBoxKeyLength->setCurrentText(QCoreApplication::translate("SettingsDialogBase", "1024", nullptr));
        m_pLabelCertificate->setText(QCoreApplication::translate("SettingsDialogBase", "Certificate", nullptr));
        m_pPushButtonBrowseCert->setText(QString());
        m_pPushButtonRegenCert->setText(QCoreApplication::translate("SettingsDialogBase", "Regenerate cert", nullptr));
        m_pRadioUserScope->setText(QCoreApplication::translate("SettingsDialogBase", "Current user", nullptr));
        m_pRadioSystemScope->setText(QCoreApplication::translate("SettingsDialogBase", "All users", nullptr));
        m_labelAdminRightsMessage->setText(QCoreApplication::translate("SettingsDialogBase", "Note: Only Admins can edit settings for all users.", nullptr));
        m_pCheckBoxAutoConfig->setText(QCoreApplication::translate("SettingsDialogBase", "Enable Auto Config", nullptr));
        m_pLabelInstallBonjour->setText(QCoreApplication::translate("SettingsDialogBase", "<html><head/><body><p><a href=\"#\"><span style=\" text-decoration: underline; color:#007af4;\">Install Bonjour</span></a></p></body></html>", nullptr));
        m_pLabelComputerName->setText(QCoreApplication::translate("SettingsDialogBase", "Computer name", nullptr));
        m_pLabelNameError->setText(QString());
        m_pLabel_20->setText(QCoreApplication::translate("SettingsDialogBase", "P&ort", nullptr));
        m_pLabel_21->setText(QCoreApplication::translate("SettingsDialogBase", "Network IP", nullptr));
        m_pCheckBoxAutoHide->setText(QCoreApplication::translate("SettingsDialogBase", "&Hide on startup", nullptr));
        m_pCheckBoxMinimizeToTray->setText(QCoreApplication::translate("SettingsDialogBase", "Minimize to system &tray", nullptr));
        m_pCheckBoxPreventSleep->setText(QCoreApplication::translate("SettingsDialogBase", "Stop this computer from sleeping", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialogBase: public Ui_SettingsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOGBASE_H
