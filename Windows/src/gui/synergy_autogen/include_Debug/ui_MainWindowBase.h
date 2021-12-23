/********************************************************************************
** Form generated from reading UI file 'MainWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWBASE_H
#define UI_MAINWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/ClientStateLabel.h"
#include "widgets/ServerStateLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowBase
{
public:
    QAction *m_pActionAbout;
    QAction *m_pActionHelp;
    QAction *m_pActionQuit;
    QAction *m_pActionStartSynergy;
    QAction *m_pActionStopSynergy;
    QAction *actionShowStatus;
    QAction *m_pActionMinimize;
    QAction *m_pActionRestore;
    QAction *m_pActionSave;
    QAction *m_pActionSettings;
    QAction *m_pActivate;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *m_pWidgetUpdate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_pIconUpdate;
    QLabel *m_pLabelUpdate;
    QSpacerItem *m_pSpacerUpdate;
    QLabel *m_pLabelComputerName;
    QSpacerItem *verticalSpacer_5;
    QLabel *m_pLabelIpAddresses;
    QWidget *m_pMainWidgets;
    QHBoxLayout *horizontalLayout_8;
    QFrame *m_pGroupServer;
    QVBoxLayout *verticalLayout;
    QRadioButton *m_pRadioGroupServer;
    QSpacerItem *verticalSpacer;
    synergy_widgets::ServerStateLabel *m_pLabelServerState;
    QLabel *m_pLabelFingerprint;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *spacerItem;
    QPushButton *m_pButtonConfigureServer;
    QFrame *m_pGroupClient;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *m_pRadioGroupClient;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_pLabelServerName;
    QLineEdit *m_pLineEditHostname;
    QLabel *m_pLabelAutoDetected;
    QComboBox *m_pComboServerList;
    synergy_widgets::ClientStateLabel *m_pLabelClientState;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_pButtonConnect;
    QLabel *m_pLabelLogs;
    QSpacerItem *verticalSpacer_7;
    QFrame *m_pGroupLog;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *m_pLogOutput;
    QHBoxLayout *horizontalLayout;
    QLabel *m_pLabelPadlock;
    QLabel *m_pStatusLabel;
    QSpacerItem *spacer;
    QLabel *m_trialLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_pButtonApply;
    QPushButton *m_pButtonToggleStart;

    void setupUi(QMainWindow *MainWindowBase)
    {
        if (MainWindowBase->objectName().isEmpty())
            MainWindowBase->setObjectName(QString::fromUtf8("MainWindowBase"));
        MainWindowBase->resize(720, 658);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowBase->sizePolicy().hasHeightForWidth());
        MainWindowBase->setSizePolicy(sizePolicy);
        MainWindowBase->setMinimumSize(QSize(720, 552));
        m_pActionAbout = new QAction(MainWindowBase);
        m_pActionAbout->setObjectName(QString::fromUtf8("m_pActionAbout"));
#if QT_CONFIG(shortcut)
        m_pActionAbout->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionHelp = new QAction(MainWindowBase);
        m_pActionHelp->setObjectName(QString::fromUtf8("m_pActionHelp"));
#if QT_CONFIG(shortcut)
        m_pActionHelp->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionQuit = new QAction(MainWindowBase);
        m_pActionQuit->setObjectName(QString::fromUtf8("m_pActionQuit"));
#if QT_CONFIG(shortcut)
        m_pActionQuit->setShortcut(QString::fromUtf8("Ctrl+Q"));
#endif // QT_CONFIG(shortcut)
        m_pActionStartSynergy = new QAction(MainWindowBase);
        m_pActionStartSynergy->setObjectName(QString::fromUtf8("m_pActionStartSynergy"));
#if QT_CONFIG(shortcut)
        m_pActionStartSynergy->setShortcut(QString::fromUtf8("Ctrl+S"));
#endif // QT_CONFIG(shortcut)
        m_pActionStopSynergy = new QAction(MainWindowBase);
        m_pActionStopSynergy->setObjectName(QString::fromUtf8("m_pActionStopSynergy"));
        m_pActionStopSynergy->setEnabled(false);
#if QT_CONFIG(shortcut)
        m_pActionStopSynergy->setShortcut(QString::fromUtf8("Ctrl+T"));
#endif // QT_CONFIG(shortcut)
        actionShowStatus = new QAction(MainWindowBase);
        actionShowStatus->setObjectName(QString::fromUtf8("actionShowStatus"));
#if QT_CONFIG(shortcut)
        actionShowStatus->setShortcut(QString::fromUtf8("Ctrl+H"));
#endif // QT_CONFIG(shortcut)
        m_pActionMinimize = new QAction(MainWindowBase);
        m_pActionMinimize->setObjectName(QString::fromUtf8("m_pActionMinimize"));
#if QT_CONFIG(shortcut)
        m_pActionMinimize->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionRestore = new QAction(MainWindowBase);
        m_pActionRestore->setObjectName(QString::fromUtf8("m_pActionRestore"));
#if QT_CONFIG(shortcut)
        m_pActionRestore->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionSave = new QAction(MainWindowBase);
        m_pActionSave->setObjectName(QString::fromUtf8("m_pActionSave"));
#if QT_CONFIG(shortcut)
        m_pActionSave->setShortcut(QString::fromUtf8("Ctrl+Alt+S"));
#endif // QT_CONFIG(shortcut)
        m_pActionSettings = new QAction(MainWindowBase);
        m_pActionSettings->setObjectName(QString::fromUtf8("m_pActionSettings"));
#if QT_CONFIG(shortcut)
        m_pActionSettings->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActivate = new QAction(MainWindowBase);
        m_pActivate->setObjectName(QString::fromUtf8("m_pActivate"));
        centralwidget = new QWidget(MainWindowBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, -1);
        m_pWidgetUpdate = new QWidget(centralwidget);
        m_pWidgetUpdate->setObjectName(QString::fromUtf8("m_pWidgetUpdate"));
        horizontalLayout_2 = new QHBoxLayout(m_pWidgetUpdate);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 0, 0, 2);
        m_pIconUpdate = new QLabel(m_pWidgetUpdate);
        m_pIconUpdate->setObjectName(QString::fromUtf8("m_pIconUpdate"));
        m_pIconUpdate->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/warning.png")));

        horizontalLayout_2->addWidget(m_pIconUpdate);

        m_pLabelUpdate = new QLabel(m_pWidgetUpdate);
        m_pLabelUpdate->setObjectName(QString::fromUtf8("m_pLabelUpdate"));
        m_pLabelUpdate->setText(QString::fromUtf8("m_pLabelUpdate"));
        m_pLabelUpdate->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(m_pLabelUpdate);

        m_pSpacerUpdate = new QSpacerItem(469, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(m_pSpacerUpdate);


        verticalLayout_2->addWidget(m_pWidgetUpdate);

        m_pLabelComputerName = new QLabel(centralwidget);
        m_pLabelComputerName->setObjectName(QString::fromUtf8("m_pLabelComputerName"));
        m_pLabelComputerName->setMinimumSize(QSize(0, 0));
        m_pLabelComputerName->setMaximumSize(QSize(65535, 65535));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setKerning(true);
        m_pLabelComputerName->setFont(font);
        m_pLabelComputerName->setText(QString::fromUtf8("This computer's name:"));

        verticalLayout_2->addWidget(m_pLabelComputerName);

        verticalSpacer_5 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        m_pLabelIpAddresses = new QLabel(centralwidget);
        m_pLabelIpAddresses->setObjectName(QString::fromUtf8("m_pLabelIpAddresses"));
        m_pLabelIpAddresses->setText(QString::fromUtf8("This computer's IP addresses:"));

        verticalLayout_2->addWidget(m_pLabelIpAddresses);

        m_pMainWidgets = new QWidget(centralwidget);
        m_pMainWidgets->setObjectName(QString::fromUtf8("m_pMainWidgets"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pMainWidgets->sizePolicy().hasHeightForWidth());
        m_pMainWidgets->setSizePolicy(sizePolicy1);
        m_pMainWidgets->setMinimumSize(QSize(0, 0));
        m_pMainWidgets->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_8 = new QHBoxLayout(m_pMainWidgets);
        horizontalLayout_8->setSpacing(16);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 28, 0, 8);
        m_pGroupServer = new QFrame(m_pMainWidgets);
        m_pGroupServer->setObjectName(QString::fromUtf8("m_pGroupServer"));
        m_pGroupServer->setMinimumSize(QSize(0, 250));
        m_pGroupServer->setMaximumSize(QSize(16777215, 250));
        m_pGroupServer->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);;\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        m_pGroupServer->setFrameShape(QFrame::StyledPanel);
        m_pGroupServer->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(m_pGroupServer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 11, -1, -1);
        m_pRadioGroupServer = new QRadioButton(m_pGroupServer);
        m_pRadioGroupServer->setObjectName(QString::fromUtf8("m_pRadioGroupServer"));
        sizePolicy.setHeightForWidth(m_pRadioGroupServer->sizePolicy().hasHeightForWidth());
        m_pRadioGroupServer->setSizePolicy(sizePolicy);
        m_pRadioGroupServer->setMinimumSize(QSize(300, 30));
        m_pRadioGroupServer->setMaximumSize(QSize(65535, 30));
        m_pRadioGroupServer->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{\n"
"   top: -7px;\n"
"}"));

        verticalLayout->addWidget(m_pRadioGroupServer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        m_pLabelServerState = new synergy_widgets::ServerStateLabel(m_pGroupServer);
        m_pLabelServerState->setObjectName(QString::fromUtf8("m_pLabelServerState"));
        m_pLabelServerState->setIndent(20);

        verticalLayout->addWidget(m_pLabelServerState);

        m_pLabelFingerprint = new QLabel(m_pGroupServer);
        m_pLabelFingerprint->setObjectName(QString::fromUtf8("m_pLabelFingerprint"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pLabelFingerprint->sizePolicy().hasHeightForWidth());
        m_pLabelFingerprint->setSizePolicy(sizePolicy2);
        m_pLabelFingerprint->setMaximumSize(QSize(16777215, 20));
        m_pLabelFingerprint->setTextFormat(Qt::RichText);
        m_pLabelFingerprint->setIndent(20);

        verticalLayout->addWidget(m_pLabelFingerprint);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(spacerItem);

        m_pButtonConfigureServer = new QPushButton(m_pGroupServer);
        m_pButtonConfigureServer->setObjectName(QString::fromUtf8("m_pButtonConfigureServer"));
        m_pButtonConfigureServer->setMinimumSize(QSize(0, 0));
        m_pButtonConfigureServer->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(m_pButtonConfigureServer);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_8->addWidget(m_pGroupServer);

        m_pGroupClient = new QFrame(m_pMainWidgets);
        m_pGroupClient->setObjectName(QString::fromUtf8("m_pGroupClient"));
        m_pGroupClient->setMinimumSize(QSize(0, 250));
        m_pGroupClient->setMaximumSize(QSize(16777215, 250));
        m_pGroupClient->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        m_pGroupClient->setFrameShape(QFrame::StyledPanel);
        m_pGroupClient->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(m_pGroupClient);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 11, -1, -1);
        m_pRadioGroupClient = new QRadioButton(m_pGroupClient);
        m_pRadioGroupClient->setObjectName(QString::fromUtf8("m_pRadioGroupClient"));
        sizePolicy.setHeightForWidth(m_pRadioGroupClient->sizePolicy().hasHeightForWidth());
        m_pRadioGroupClient->setSizePolicy(sizePolicy);
        m_pRadioGroupClient->setMinimumSize(QSize(0, 30));
        m_pRadioGroupClient->setMaximumSize(QSize(300, 30));
        m_pRadioGroupClient->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{\n"
"     top: -7px;\n"
"}"));

        verticalLayout_5->addWidget(m_pRadioGroupClient);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(19, 10, -1, -1);
        m_pLabelServerName = new QLabel(m_pGroupClient);
        m_pLabelServerName->setObjectName(QString::fromUtf8("m_pLabelServerName"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pLabelServerName->sizePolicy().hasHeightForWidth());
        m_pLabelServerName->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(m_pLabelServerName);

        m_pLineEditHostname = new QLineEdit(m_pGroupClient);
        m_pLineEditHostname->setObjectName(QString::fromUtf8("m_pLineEditHostname"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_pLineEditHostname->sizePolicy().hasHeightForWidth());
        m_pLineEditHostname->setSizePolicy(sizePolicy4);
        m_pLineEditHostname->setMinimumSize(QSize(200, 0));

        verticalLayout_3->addWidget(m_pLineEditHostname);

        m_pLabelAutoDetected = new QLabel(m_pGroupClient);
        m_pLabelAutoDetected->setObjectName(QString::fromUtf8("m_pLabelAutoDetected"));

        verticalLayout_3->addWidget(m_pLabelAutoDetected);

        m_pComboServerList = new QComboBox(m_pGroupClient);
        m_pComboServerList->setObjectName(QString::fromUtf8("m_pComboServerList"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_pComboServerList->sizePolicy().hasHeightForWidth());
        m_pComboServerList->setSizePolicy(sizePolicy5);
        m_pComboServerList->setMinimumSize(QSize(200, 0));

        verticalLayout_3->addWidget(m_pComboServerList);


        verticalLayout_5->addLayout(verticalLayout_3);

        m_pLabelClientState = new synergy_widgets::ClientStateLabel(m_pGroupClient);
        m_pLabelClientState->setObjectName(QString::fromUtf8("m_pLabelClientState"));
        m_pLabelClientState->setIndent(20);

        verticalLayout_5->addWidget(m_pLabelClientState);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        m_pButtonConnect = new QPushButton(m_pGroupClient);
        m_pButtonConnect->setObjectName(QString::fromUtf8("m_pButtonConnect"));

        horizontalLayout_9->addWidget(m_pButtonConnect);


        verticalLayout_5->addLayout(horizontalLayout_9);


        horizontalLayout_8->addWidget(m_pGroupClient);


        verticalLayout_2->addWidget(m_pMainWidgets);

        m_pLabelLogs = new QLabel(centralwidget);
        m_pLabelLogs->setObjectName(QString::fromUtf8("m_pLabelLogs"));
        m_pLabelLogs->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(m_pLabelLogs);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        m_pGroupLog = new QFrame(centralwidget);
        m_pGroupLog->setObjectName(QString::fromUtf8("m_pGroupLog"));
        m_pGroupLog->setMinimumSize(QSize(0, 0));
        m_pGroupLog->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);;\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        m_pGroupLog->setFrameShape(QFrame::StyledPanel);
        m_pGroupLog->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(m_pGroupLog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(8, 8, 8, 8);
        m_pLogOutput = new QPlainTextEdit(m_pGroupLog);
        m_pLogOutput->setObjectName(QString::fromUtf8("m_pLogOutput"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_pLogOutput->sizePolicy().hasHeightForWidth());
        m_pLogOutput->setSizePolicy(sizePolicy6);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setKerning(true);
        m_pLogOutput->setFont(font1);
        m_pLogOutput->setAutoFillBackground(false);
        m_pLogOutput->setUndoRedoEnabled(false);
        m_pLogOutput->setLineWrapMode(QPlainTextEdit::NoWrap);
        m_pLogOutput->setReadOnly(true);
        m_pLogOutput->setMaximumBlockCount(10000);

        verticalLayout_4->addWidget(m_pLogOutput);


        verticalLayout_2->addWidget(m_pGroupLog);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, 16, -1, -1);
        m_pLabelPadlock = new QLabel(centralwidget);
        m_pLabelPadlock->setObjectName(QString::fromUtf8("m_pLabelPadlock"));
        m_pLabelPadlock->setEnabled(true);
        m_pLabelPadlock->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/padlock.png")));

        horizontalLayout->addWidget(m_pLabelPadlock);

        m_pStatusLabel = new QLabel(centralwidget);
        m_pStatusLabel->setObjectName(QString::fromUtf8("m_pStatusLabel"));

        horizontalLayout->addWidget(m_pStatusLabel);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer);

        m_trialLabel = new QLabel(centralwidget);
        m_trialLabel->setObjectName(QString::fromUtf8("m_trialLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setBold(true);
        font2.setWeight(87);
        m_trialLabel->setFont(font2);
        m_trialLabel->setAutoFillBackground(false);
        m_trialLabel->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"font-weight: 700;\n"
"padding: 3px 5px;\n"
"border-radius: 3px;\n"
"background-color: #EC4C47;\n"
"color: #ffffff;\n"
"top: 3px;"));
        m_trialLabel->setText(QString::fromUtf8(""));
        m_trialLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_trialLabel->setMargin(0);
        m_trialLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(m_trialLabel);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_pButtonApply = new QPushButton(centralwidget);
        m_pButtonApply->setObjectName(QString::fromUtf8("m_pButtonApply"));
        m_pButtonApply->setEnabled(false);

        horizontalLayout->addWidget(m_pButtonApply);

        m_pButtonToggleStart = new QPushButton(centralwidget);
        m_pButtonToggleStart->setObjectName(QString::fromUtf8("m_pButtonToggleStart"));
        m_pButtonToggleStart->setEnabled(false);

        horizontalLayout->addWidget(m_pButtonToggleStart);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindowBase->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        m_pLabelServerName->setBuddy(m_pLineEditHostname);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindowBase);
        QObject::connect(m_pButtonToggleStart, SIGNAL(clicked()), m_pActionStartSynergy, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindowBase);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowBase)
    {
        MainWindowBase->setWindowTitle(QCoreApplication::translate("MainWindowBase", "Synergy", nullptr));
        m_pActionAbout->setText(QCoreApplication::translate("MainWindowBase", "&About Synergy...", nullptr));
        m_pActionHelp->setText(QCoreApplication::translate("MainWindowBase", "Visit &help site", nullptr));
        m_pActionQuit->setText(QCoreApplication::translate("MainWindowBase", "&Quit", nullptr));
#if QT_CONFIG(statustip)
        m_pActionQuit->setStatusTip(QCoreApplication::translate("MainWindowBase", "Quit", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionStartSynergy->setText(QCoreApplication::translate("MainWindowBase", "&Start", nullptr));
#if QT_CONFIG(statustip)
        m_pActionStartSynergy->setStatusTip(QCoreApplication::translate("MainWindowBase", "Run", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionStopSynergy->setText(QCoreApplication::translate("MainWindowBase", "S&top", nullptr));
#if QT_CONFIG(statustip)
        m_pActionStopSynergy->setStatusTip(QCoreApplication::translate("MainWindowBase", "Stop", nullptr));
#endif // QT_CONFIG(statustip)
        actionShowStatus->setText(QCoreApplication::translate("MainWindowBase", "S&how Status", nullptr));
        m_pActionMinimize->setText(QCoreApplication::translate("MainWindowBase", "&Hide", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionMinimize->setToolTip(QCoreApplication::translate("MainWindowBase", "Hide", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionRestore->setText(QCoreApplication::translate("MainWindowBase", "&Show", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionRestore->setToolTip(QCoreApplication::translate("MainWindowBase", "Show", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionSave->setText(QCoreApplication::translate("MainWindowBase", "Save configuration &as...", nullptr));
#if QT_CONFIG(statustip)
        m_pActionSave->setStatusTip(QCoreApplication::translate("MainWindowBase", "Save the interactively generated server configuration to a file.", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionSettings->setText(QCoreApplication::translate("MainWindowBase", "Preferences", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionSettings->setToolTip(QCoreApplication::translate("MainWindowBase", "Preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActivate->setText(QCoreApplication::translate("MainWindowBase", "Activate", nullptr));
#if QT_CONFIG(tooltip)
        m_pActivate->setToolTip(QCoreApplication::translate("MainWindowBase", "Activate", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pIconUpdate->setText(QString());
        m_pRadioGroupServer->setText(QCoreApplication::translate("MainWindowBase", "Use this computer's keyboard and mouse \n"
"(Make this computer the server).", nullptr));
        m_pLabelServerState->setText(QCoreApplication::translate("MainWindowBase", "No clients connected", nullptr));
        m_pLabelFingerprint->setText(QCoreApplication::translate("MainWindowBase", "<html><head/><body><p>TLS/SSL active - <a href=\"#\" style=\"text-decoration:none; color: #4285F4;\">view</a></p></body></html>", nullptr));
        m_pButtonConfigureServer->setText(QCoreApplication::translate("MainWindowBase", "&Configure server", nullptr));
        m_pRadioGroupClient->setText(QCoreApplication::translate("MainWindowBase", "Use another computer\342\200\231s mouse and keyboard\n"
"(Make this computer the client).", nullptr));
        m_pLabelServerName->setText(QCoreApplication::translate("MainWindowBase", "&Server IP address or name:", nullptr));
#if QT_CONFIG(tooltip)
        m_pLineEditHostname->setToolTip(QCoreApplication::translate("MainWindowBase", "Hostname or IP address of the server computer.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pLabelAutoDetected->setText(QCoreApplication::translate("MainWindowBase", "Server:", nullptr));
        m_pLabelClientState->setText(QCoreApplication::translate("MainWindowBase", "Connected to the server", nullptr));
        m_pButtonConnect->setText(QCoreApplication::translate("MainWindowBase", "Connect", nullptr));
        m_pLabelLogs->setText(QCoreApplication::translate("MainWindowBase", "Logs", nullptr));
        m_pLabelPadlock->setText(QString());
        m_pStatusLabel->setText(QCoreApplication::translate("MainWindowBase", "Ready", nullptr));
        m_pButtonApply->setText(QCoreApplication::translate("MainWindowBase", "&Apply", nullptr));
        m_pButtonToggleStart->setText(QCoreApplication::translate("MainWindowBase", "&Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowBase: public Ui_MainWindowBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWBASE_H
