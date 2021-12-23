/********************************************************************************
** Form generated from reading UI file 'ServerConfigDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERCONFIGDIALOGBASE_H
#define UI_SERVERCONFIGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ScreenSetupView.h"
#include "TrashScreenWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ServerConfigDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *m_pTabWidget;
    QWidget *m_pTabScreens;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    TrashScreenWidget *m_pTrashScreenWidget;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *m_pButtonAddComputer;
    QSpacerItem *verticalSpacer;
    ScreenSetupView *m_pScreenSetupView;
    QWidget *m_pTabHotkeys;
    QHBoxLayout *hboxLayout1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *m_pListHotkeys;
    QPushButton *m_pButtonNewHotkey;
    QPushButton *m_pButtonEditHotkey;
    QPushButton *m_pButtonRemoveHotkey;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QListWidget *m_pListActions;
    QPushButton *m_pButtonNewAction;
    QPushButton *m_pButtonEditAction;
    QPushButton *m_pButtonRemoveAction;
    QSpacerItem *spacerItem1;
    QWidget *m_pTabAdvanced;
    QGridLayout *gridLayout2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *m_pGroupSwitch;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout2;
    QCheckBox *m_pCheckBoxSwitchDelay;
    QSpacerItem *spacerItem2;
    QSpinBox *m_pSpinBoxSwitchDelay;
    QLabel *m_pLabel_14;
    QHBoxLayout *hboxLayout3;
    QCheckBox *m_pCheckBoxSwitchDoubleTap;
    QSpacerItem *spacerItem3;
    QSpinBox *m_pSpinBoxSwitchDoubleTap;
    QLabel *m_pLabel_15;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_pCheckBoxEnableClipboard;
    QSpacerItem *horizontalSpacer;
    QSpinBox *m_pSpinBoxClipboardSizeLimit;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *spacerItem4;
    QGroupBox *m_pGroupSwitchCorners;
    QGridLayout *gridLayout3;
    QCheckBox *m_pCheckBoxCornerTopLeft;
    QCheckBox *m_pCheckBoxCornerTopRight;
    QCheckBox *m_pCheckBoxCornerBottomLeft;
    QCheckBox *m_pCheckBoxCornerBottomRight;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *m_pSpinBoxSwitchCornerSize;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *m_pGroupOptions;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem5;
    QCheckBox *m_pCheckBoxRelativeMouseMoves;
    QHBoxLayout *hboxLayout4;
    QCheckBox *m_pCheckBoxHeartbeat;
    QSpacerItem *spacerItem6;
    QSpinBox *m_pSpinBoxHeartbeat;
    QLabel *m_pLabel_16;
    QCheckBox *m_pCheckBoxIgnoreAutoConfigClient;
    QCheckBox *m_pCheckBoxDisableLockToScreen;
    QCheckBox *m_pCheckBoxWin32KeepForeground;
    QSpacerItem *verticalSpacer_5;
    QWidget *m_pTabAdvancedConfig;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout1;
    QSpacerItem *verticalSpacer_21;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_31;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_41;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_21;
    QCheckBox *m_pCheckBoxUseExternalConfig;
    QSpacerItem *horizontalSpacer_31;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *m_pLabelConfigFile;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *m_pEditConfigFile;
    QPushButton *m_pButtonBrowseConfigFile;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer1;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *ServerConfigDialogBase)
    {
        if (ServerConfigDialogBase->objectName().isEmpty())
            ServerConfigDialogBase->setObjectName(QString::fromUtf8("ServerConfigDialogBase"));
        ServerConfigDialogBase->resize(778, 508);
        ServerConfigDialogBase->setMinimumSize(QSize(0, 0));
        vboxLayout = new QVBoxLayout(ServerConfigDialogBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_pTabWidget = new QTabWidget(ServerConfigDialogBase);
        m_pTabWidget->setObjectName(QString::fromUtf8("m_pTabWidget"));
        m_pTabWidget->setMinimumSize(QSize(0, 0));
        m_pTabScreens = new QWidget();
        m_pTabScreens->setObjectName(QString::fromUtf8("m_pTabScreens"));
        vboxLayout1 = new QVBoxLayout(m_pTabScreens);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(6, 5, 6, 5);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_pTrashScreenWidget = new TrashScreenWidget(m_pTabScreens);
        m_pTrashScreenWidget->setObjectName(QString::fromUtf8("m_pTrashScreenWidget"));
        m_pTrashScreenWidget->setAcceptDrops(true);
        m_pTrashScreenWidget->setFrameShape(QFrame::StyledPanel);
        m_pTrashScreenWidget->setFrameShadow(QFrame::Raised);
        m_pTrashScreenWidget->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/64x64/user-trash.png")));

        hboxLayout->addWidget(m_pTrashScreenWidget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(m_pTabScreens);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(310, 16777215));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_2->setIndent(-1);

        hboxLayout->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        m_pButtonAddComputer = new QPushButton(m_pTabScreens);
        m_pButtonAddComputer->setObjectName(QString::fromUtf8("m_pButtonAddComputer"));

        verticalLayout->addWidget(m_pButtonAddComputer);


        hboxLayout->addLayout(verticalLayout);


        vboxLayout1->addLayout(hboxLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout1->addItem(verticalSpacer);

        m_pScreenSetupView = new ScreenSetupView(m_pTabScreens);
        m_pScreenSetupView->setObjectName(QString::fromUtf8("m_pScreenSetupView"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pScreenSetupView->sizePolicy().hasHeightForWidth());
        m_pScreenSetupView->setSizePolicy(sizePolicy1);
        m_pScreenSetupView->setMinimumSize(QSize(0, 273));
        m_pScreenSetupView->setMaximumSize(QSize(16777215, 16777215));
        m_pScreenSetupView->setAcceptDrops(true);
        m_pScreenSetupView->setAutoFillBackground(false);
        m_pScreenSetupView->setFrameShape(QFrame::StyledPanel);
        m_pScreenSetupView->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(m_pScreenSetupView);

        m_pTabWidget->addTab(m_pTabScreens, QString());
        m_pTabHotkeys = new QWidget();
        m_pTabHotkeys->setObjectName(QString::fromUtf8("m_pTabHotkeys"));
        hboxLayout1 = new QHBoxLayout(m_pTabHotkeys);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        groupBox = new QGroupBox(m_pTabHotkeys);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setKerning(false);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pListHotkeys = new QListWidget(groupBox);
        m_pListHotkeys->setObjectName(QString::fromUtf8("m_pListHotkeys"));

        gridLayout->addWidget(m_pListHotkeys, 0, 0, 4, 1);

        m_pButtonNewHotkey = new QPushButton(groupBox);
        m_pButtonNewHotkey->setObjectName(QString::fromUtf8("m_pButtonNewHotkey"));
        m_pButtonNewHotkey->setEnabled(true);

        gridLayout->addWidget(m_pButtonNewHotkey, 0, 1, 1, 1);

        m_pButtonEditHotkey = new QPushButton(groupBox);
        m_pButtonEditHotkey->setObjectName(QString::fromUtf8("m_pButtonEditHotkey"));
        m_pButtonEditHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonEditHotkey, 1, 1, 1, 1);

        m_pButtonRemoveHotkey = new QPushButton(groupBox);
        m_pButtonRemoveHotkey->setObjectName(QString::fromUtf8("m_pButtonRemoveHotkey"));
        m_pButtonRemoveHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonRemoveHotkey, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(75, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(m_pTabHotkeys);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font1;
        font1.setKerning(true);
        groupBox_2->setFont(font1);
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_pListActions = new QListWidget(groupBox_2);
        m_pListActions->setObjectName(QString::fromUtf8("m_pListActions"));

        gridLayout1->addWidget(m_pListActions, 0, 0, 4, 1);

        m_pButtonNewAction = new QPushButton(groupBox_2);
        m_pButtonNewAction->setObjectName(QString::fromUtf8("m_pButtonNewAction"));
        m_pButtonNewAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonNewAction, 0, 1, 1, 1);

        m_pButtonEditAction = new QPushButton(groupBox_2);
        m_pButtonEditAction->setObjectName(QString::fromUtf8("m_pButtonEditAction"));
        m_pButtonEditAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonEditAction, 1, 1, 1, 1);

        m_pButtonRemoveAction = new QPushButton(groupBox_2);
        m_pButtonRemoveAction->setObjectName(QString::fromUtf8("m_pButtonRemoveAction"));
        m_pButtonRemoveAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonRemoveAction, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox_2);

        m_pTabWidget->addTab(m_pTabHotkeys, QString());
        m_pTabAdvanced = new QWidget();
        m_pTabAdvanced->setObjectName(QString::fromUtf8("m_pTabAdvanced"));
        gridLayout2 = new QGridLayout(m_pTabAdvanced);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(9, -1, 9, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        m_pGroupSwitch = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitch->setObjectName(QString::fromUtf8("m_pGroupSwitch"));
        m_pGroupSwitch->setFont(font1);
        m_pGroupSwitch->setStyleSheet(QString::fromUtf8("QGroupBox::title{\n"
"   left: -5px;\n"
"   top: -2px;\n"
"}"));
        vboxLayout2 = new QVBoxLayout(m_pGroupSwitch);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(-1, 6, -1, 6);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_pCheckBoxSwitchDelay = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDelay->setObjectName(QString::fromUtf8("m_pCheckBoxSwitchDelay"));
        m_pCheckBoxSwitchDelay->setEnabled(true);

        hboxLayout2->addWidget(m_pCheckBoxSwitchDelay);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        m_pSpinBoxSwitchDelay = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDelay->setObjectName(QString::fromUtf8("m_pSpinBoxSwitchDelay"));
        m_pSpinBoxSwitchDelay->setEnabled(false);
        m_pSpinBoxSwitchDelay->setMinimum(10);
        m_pSpinBoxSwitchDelay->setMaximum(10000);
        m_pSpinBoxSwitchDelay->setSingleStep(10);
        m_pSpinBoxSwitchDelay->setValue(250);

        hboxLayout2->addWidget(m_pSpinBoxSwitchDelay);

        m_pLabel_14 = new QLabel(m_pGroupSwitch);
        m_pLabel_14->setObjectName(QString::fromUtf8("m_pLabel_14"));

        hboxLayout2->addWidget(m_pLabel_14);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_pCheckBoxSwitchDoubleTap = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDoubleTap->setObjectName(QString::fromUtf8("m_pCheckBoxSwitchDoubleTap"));
        m_pCheckBoxSwitchDoubleTap->setEnabled(true);

        hboxLayout3->addWidget(m_pCheckBoxSwitchDoubleTap);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        m_pSpinBoxSwitchDoubleTap = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDoubleTap->setObjectName(QString::fromUtf8("m_pSpinBoxSwitchDoubleTap"));
        m_pSpinBoxSwitchDoubleTap->setEnabled(false);
        m_pSpinBoxSwitchDoubleTap->setMinimum(10);
        m_pSpinBoxSwitchDoubleTap->setMaximum(10000);
        m_pSpinBoxSwitchDoubleTap->setSingleStep(10);
        m_pSpinBoxSwitchDoubleTap->setValue(250);

        hboxLayout3->addWidget(m_pSpinBoxSwitchDoubleTap);

        m_pLabel_15 = new QLabel(m_pGroupSwitch);
        m_pLabel_15->setObjectName(QString::fromUtf8("m_pLabel_15"));

        hboxLayout3->addWidget(m_pLabel_15);


        vboxLayout2->addLayout(hboxLayout3);


        verticalLayout_2->addWidget(m_pGroupSwitch);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        groupBox_3 = new QGroupBox(m_pTabAdvanced);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font1);
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox::title{\n"
"   left: -2px;\n"
"   top: -2px;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 6, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_pCheckBoxEnableClipboard = new QCheckBox(groupBox_3);
        m_pCheckBoxEnableClipboard->setObjectName(QString::fromUtf8("m_pCheckBoxEnableClipboard"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pCheckBoxEnableClipboard->sizePolicy().hasHeightForWidth());
        m_pCheckBoxEnableClipboard->setSizePolicy(sizePolicy2);
        m_pCheckBoxEnableClipboard->setChecked(true);

        horizontalLayout->addWidget(m_pCheckBoxEnableClipboard);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_pSpinBoxClipboardSizeLimit = new QSpinBox(groupBox_3);
        m_pSpinBoxClipboardSizeLimit->setObjectName(QString::fromUtf8("m_pSpinBoxClipboardSizeLimit"));
        m_pSpinBoxClipboardSizeLimit->setEnabled(false);
        m_pSpinBoxClipboardSizeLimit->setMaximum(10000);
        m_pSpinBoxClipboardSizeLimit->setValue(3);

        horizontalLayout->addWidget(m_pSpinBoxClipboardSizeLimit);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout_2->addWidget(groupBox_3);


        gridLayout2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem4, 5, 0, 1, 1);

        m_pGroupSwitchCorners = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitchCorners->setObjectName(QString::fromUtf8("m_pGroupSwitchCorners"));
        m_pGroupSwitchCorners->setFont(font1);
        m_pGroupSwitchCorners->setStyleSheet(QString::fromUtf8("QGroupBox::title{\n"
"   left: -5px;\n"
"   top: -2px;\n"
"}"));
        m_pGroupSwitchCorners->setChecked(false);
        gridLayout3 = new QGridLayout(m_pGroupSwitchCorners);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setContentsMargins(-1, 6, -1, -1);
        m_pCheckBoxCornerTopLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopLeft->setObjectName(QString::fromUtf8("m_pCheckBoxCornerTopLeft"));

        gridLayout3->addWidget(m_pCheckBoxCornerTopLeft, 1, 0, 1, 3);

        m_pCheckBoxCornerTopRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopRight->setObjectName(QString::fromUtf8("m_pCheckBoxCornerTopRight"));

        gridLayout3->addWidget(m_pCheckBoxCornerTopRight, 1, 3, 1, 2);

        m_pCheckBoxCornerBottomLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomLeft->setObjectName(QString::fromUtf8("m_pCheckBoxCornerBottomLeft"));

        gridLayout3->addWidget(m_pCheckBoxCornerBottomLeft, 2, 0, 1, 3);

        m_pCheckBoxCornerBottomRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomRight->setObjectName(QString::fromUtf8("m_pCheckBoxCornerBottomRight"));

        gridLayout3->addWidget(m_pCheckBoxCornerBottomRight, 2, 3, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(m_pGroupSwitchCorners);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        m_pSpinBoxSwitchCornerSize = new QSpinBox(m_pGroupSwitchCorners);
        m_pSpinBoxSwitchCornerSize->setObjectName(QString::fromUtf8("m_pSpinBoxSwitchCornerSize"));
        m_pSpinBoxSwitchCornerSize->setMaximum(30000);

        horizontalLayout_2->addWidget(m_pSpinBoxSwitchCornerSize);

        label_3 = new QLabel(m_pGroupSwitchCorners);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);


        gridLayout3->addLayout(horizontalLayout_2, 1, 5, 1, 1);


        gridLayout2->addWidget(m_pGroupSwitchCorners, 4, 0, 1, 3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, 0, -1);
        m_pGroupOptions = new QGroupBox(m_pTabAdvanced);
        m_pGroupOptions->setObjectName(QString::fromUtf8("m_pGroupOptions"));
        m_pGroupOptions->setFont(font);
        m_pGroupOptions->setStyleSheet(QString::fromUtf8("QGroupBox::title{\n"
"   left: -5px;\n"
"   top: -2px;\n"
"}"));
        gridLayout4 = new QGridLayout(m_pGroupOptions);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setVerticalSpacing(12);
        spacerItem5 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem5, 11, 0, 1, 1);

        m_pCheckBoxRelativeMouseMoves = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxRelativeMouseMoves->setObjectName(QString::fromUtf8("m_pCheckBoxRelativeMouseMoves"));
        m_pCheckBoxRelativeMouseMoves->setEnabled(true);
        m_pCheckBoxRelativeMouseMoves->setStyleSheet(QString::fromUtf8("padding-left: 2px;"));

        gridLayout4->addWidget(m_pCheckBoxRelativeMouseMoves, 1, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(9);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, -1, -1, -1);
        m_pCheckBoxHeartbeat = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxHeartbeat->setObjectName(QString::fromUtf8("m_pCheckBoxHeartbeat"));
        m_pCheckBoxHeartbeat->setEnabled(true);
        m_pCheckBoxHeartbeat->setStyleSheet(QString::fromUtf8("left: -2px;"));

        hboxLayout4->addWidget(m_pCheckBoxHeartbeat);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);

        m_pSpinBoxHeartbeat = new QSpinBox(m_pGroupOptions);
        m_pSpinBoxHeartbeat->setObjectName(QString::fromUtf8("m_pSpinBoxHeartbeat"));
        m_pSpinBoxHeartbeat->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pSpinBoxHeartbeat->sizePolicy().hasHeightForWidth());
        m_pSpinBoxHeartbeat->setSizePolicy(sizePolicy3);
        m_pSpinBoxHeartbeat->setMinimum(1000);
        m_pSpinBoxHeartbeat->setMaximum(30000);
        m_pSpinBoxHeartbeat->setSingleStep(1000);
        m_pSpinBoxHeartbeat->setValue(5000);

        hboxLayout4->addWidget(m_pSpinBoxHeartbeat);

        m_pLabel_16 = new QLabel(m_pGroupOptions);
        m_pLabel_16->setObjectName(QString::fromUtf8("m_pLabel_16"));

        hboxLayout4->addWidget(m_pLabel_16);


        gridLayout4->addLayout(hboxLayout4, 0, 0, 1, 1);

        m_pCheckBoxIgnoreAutoConfigClient = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxIgnoreAutoConfigClient->setObjectName(QString::fromUtf8("m_pCheckBoxIgnoreAutoConfigClient"));
        m_pCheckBoxIgnoreAutoConfigClient->setStyleSheet(QString::fromUtf8("padding-left: 2px;"));

        gridLayout4->addWidget(m_pCheckBoxIgnoreAutoConfigClient, 4, 0, 1, 1);

        m_pCheckBoxDisableLockToScreen = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxDisableLockToScreen->setObjectName(QString::fromUtf8("m_pCheckBoxDisableLockToScreen"));
        m_pCheckBoxDisableLockToScreen->setStyleSheet(QString::fromUtf8("padding-left: 2px;"));

        gridLayout4->addWidget(m_pCheckBoxDisableLockToScreen, 6, 0, 1, 1);

        m_pCheckBoxWin32KeepForeground = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxWin32KeepForeground->setObjectName(QString::fromUtf8("m_pCheckBoxWin32KeepForeground"));
        m_pCheckBoxWin32KeepForeground->setEnabled(true);
        m_pCheckBoxWin32KeepForeground->setStyleSheet(QString::fromUtf8("padding-left: 2px;"));

        gridLayout4->addWidget(m_pCheckBoxWin32KeepForeground, 3, 0, 1, 1);


        verticalLayout_4->addWidget(m_pGroupOptions);


        gridLayout2->addLayout(verticalLayout_4, 1, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout2->addItem(verticalSpacer_5, 3, 0, 1, 1);

        m_pTabWidget->addTab(m_pTabAdvanced, QString());
        m_pTabAdvancedConfig = new QWidget();
        m_pTabAdvancedConfig->setObjectName(QString::fromUtf8("m_pTabAdvancedConfig"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_pTabAdvancedConfig->sizePolicy().hasHeightForWidth());
        m_pTabAdvancedConfig->setSizePolicy(sizePolicy4);
        verticalLayout_21 = new QVBoxLayout(m_pTabAdvancedConfig);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QString::fromUtf8("verticalLayout1"));
        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout1->addItem(verticalSpacer_21);

        label_5 = new QLabel(m_pTabAdvancedConfig);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextFormat(Qt::RichText);

        verticalLayout1->addWidget(label_5);

        verticalSpacer_31 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout1->addItem(verticalSpacer_31);

        label_6 = new QLabel(m_pTabAdvancedConfig);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setTextFormat(Qt::RichText);

        verticalLayout1->addWidget(label_6);

        verticalSpacer_41 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout1->addItem(verticalSpacer_41);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_21);

        m_pCheckBoxUseExternalConfig = new QCheckBox(m_pTabAdvancedConfig);
        m_pCheckBoxUseExternalConfig->setObjectName(QString::fromUtf8("m_pCheckBoxUseExternalConfig"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_pCheckBoxUseExternalConfig->sizePolicy().hasHeightForWidth());
        m_pCheckBoxUseExternalConfig->setSizePolicy(sizePolicy5);
        m_pCheckBoxUseExternalConfig->setMinimumSize(QSize(300, 0));

        horizontalLayout_21->addWidget(m_pCheckBoxUseExternalConfig);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_31);


        verticalLayout1->addLayout(horizontalLayout_21);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(40, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        m_pLabelConfigFile = new QLabel(m_pTabAdvancedConfig);
        m_pLabelConfigFile->setObjectName(QString::fromUtf8("m_pLabelConfigFile"));
        m_pLabelConfigFile->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_pLabelConfigFile->sizePolicy().hasHeightForWidth());
        m_pLabelConfigFile->setSizePolicy(sizePolicy6);
        m_pLabelConfigFile->setMinimumSize(QSize(96, 0));

        horizontalLayout_3->addWidget(m_pLabelConfigFile);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        m_pEditConfigFile = new QLineEdit(m_pTabAdvancedConfig);
        m_pEditConfigFile->setObjectName(QString::fromUtf8("m_pEditConfigFile"));
        m_pEditConfigFile->setEnabled(false);
        sizePolicy5.setHeightForWidth(m_pEditConfigFile->sizePolicy().hasHeightForWidth());
        m_pEditConfigFile->setSizePolicy(sizePolicy5);
        m_pEditConfigFile->setMinimumSize(QSize(180, 0));

        horizontalLayout_3->addWidget(m_pEditConfigFile);

        m_pButtonBrowseConfigFile = new QPushButton(m_pTabAdvancedConfig);
        m_pButtonBrowseConfigFile->setObjectName(QString::fromUtf8("m_pButtonBrowseConfigFile"));
        m_pButtonBrowseConfigFile->setEnabled(false);
        sizePolicy5.setHeightForWidth(m_pButtonBrowseConfigFile->sizePolicy().hasHeightForWidth());
        m_pButtonBrowseConfigFile->setSizePolicy(sizePolicy5);
        m_pButtonBrowseConfigFile->setMinimumSize(QSize(0, 0));
        m_pButtonBrowseConfigFile->setCursor(QCursor(Qt::PointingHandCursor));
        m_pButtonBrowseConfigFile->setStyleSheet(QString::fromUtf8("margin: 0px; padding: 0px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/64x64/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pButtonBrowseConfigFile->setIcon(icon);
        m_pButtonBrowseConfigFile->setIconSize(QSize(20, 13));
        m_pButtonBrowseConfigFile->setFlat(true);

        horizontalLayout_3->addWidget(m_pButtonBrowseConfigFile);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout1->addLayout(horizontalLayout_3);

        verticalSpacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout1->addItem(verticalSpacer1);


        verticalLayout_21->addLayout(verticalLayout1);

        m_pTabWidget->addTab(m_pTabAdvancedConfig, QString());

        vboxLayout->addWidget(m_pTabWidget);

        m_pButtonBox = new QDialogButtonBox(ServerConfigDialogBase);
        m_pButtonBox->setObjectName(QString::fromUtf8("m_pButtonBox"));
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_pButtonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(m_pSpinBoxSwitchCornerSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ServerConfigDialogBase);
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), ServerConfigDialogBase, SLOT(accept()));
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), ServerConfigDialogBase, SLOT(reject()));
        QObject::connect(m_pCheckBoxSwitchDelay, SIGNAL(toggled(bool)), m_pSpinBoxSwitchDelay, SLOT(setEnabled(bool)));
        QObject::connect(m_pCheckBoxSwitchDoubleTap, SIGNAL(toggled(bool)), m_pSpinBoxSwitchDoubleTap, SLOT(setEnabled(bool)));
        QObject::connect(m_pCheckBoxHeartbeat, SIGNAL(toggled(bool)), m_pSpinBoxHeartbeat, SLOT(setEnabled(bool)));
        QObject::connect(m_pListHotkeys, SIGNAL(itemDoubleClicked(QListWidgetItem*)), m_pButtonEditHotkey, SLOT(click()));
        QObject::connect(m_pListActions, SIGNAL(itemDoubleClicked(QListWidgetItem*)), m_pButtonEditAction, SLOT(click()));

        m_pTabWidget->setCurrentIndex(0);
        m_pButtonAddComputer->setDefault(true);


        QMetaObject::connectSlotsByName(ServerConfigDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ServerConfigDialogBase)
    {
        ServerConfigDialogBase->setWindowTitle(QCoreApplication::translate("ServerConfigDialogBase", "Server Configuration", nullptr));
#if QT_CONFIG(tooltip)
        m_pTrashScreenWidget->setToolTip(QCoreApplication::translate("ServerConfigDialogBase", "Drag a screen from the grid to the trashcan to remove it.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pTrashScreenWidget->setText(QString());
        label_2->setText(QCoreApplication::translate("ServerConfigDialogBase", "Configure the layout of your computer displays by dragging to where you want.", nullptr));
        m_pButtonAddComputer->setText(QCoreApplication::translate("ServerConfigDialogBase", "Add computer", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabScreens), QCoreApplication::translate("ServerConfigDialogBase", "Computers", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ServerConfigDialogBase", "&Hotkeys", nullptr));
        m_pButtonNewHotkey->setText(QCoreApplication::translate("ServerConfigDialogBase", "&New", nullptr));
        m_pButtonEditHotkey->setText(QCoreApplication::translate("ServerConfigDialogBase", "&Edit", nullptr));
        m_pButtonRemoveHotkey->setText(QCoreApplication::translate("ServerConfigDialogBase", "&Remove", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ServerConfigDialogBase", "A&ctions", nullptr));
        m_pButtonNewAction->setText(QCoreApplication::translate("ServerConfigDialogBase", "Ne&w", nullptr));
        m_pButtonEditAction->setText(QCoreApplication::translate("ServerConfigDialogBase", "E&dit", nullptr));
        m_pButtonRemoveAction->setText(QCoreApplication::translate("ServerConfigDialogBase", "Re&move", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabHotkeys), QCoreApplication::translate("ServerConfigDialogBase", "Hotkeys", nullptr));
        m_pGroupSwitch->setTitle(QCoreApplication::translate("ServerConfigDialogBase", "&Switch computer", nullptr));
        m_pCheckBoxSwitchDelay->setText(QCoreApplication::translate("ServerConfigDialogBase", "Switch &after waiting", nullptr));
        m_pLabel_14->setText(QCoreApplication::translate("ServerConfigDialogBase", "ms", nullptr));
        m_pCheckBoxSwitchDoubleTap->setText(QCoreApplication::translate("ServerConfigDialogBase", "Switch on double &tap within", nullptr));
        m_pLabel_15->setText(QCoreApplication::translate("ServerConfigDialogBase", "ms", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ServerConfigDialogBase", "Clipboard sharing", nullptr));
        m_pCheckBoxEnableClipboard->setText(QCoreApplication::translate("ServerConfigDialogBase", "Enable clipboard sharing", nullptr));
        label_4->setText(QCoreApplication::translate("ServerConfigDialogBase", "mb", nullptr));
        m_pGroupSwitchCorners->setTitle(QCoreApplication::translate("ServerConfigDialogBase", "&Dead corners for this computer", nullptr));
        m_pCheckBoxCornerTopLeft->setText(QCoreApplication::translate("ServerConfigDialogBase", "To&p-left", nullptr));
        m_pCheckBoxCornerTopRight->setText(QCoreApplication::translate("ServerConfigDialogBase", "Top-rig&ht", nullptr));
        m_pCheckBoxCornerBottomLeft->setText(QCoreApplication::translate("ServerConfigDialogBase", "&Bottom-left", nullptr));
        m_pCheckBoxCornerBottomRight->setText(QCoreApplication::translate("ServerConfigDialogBase", "Bottom-ri&ght", nullptr));
        label->setText(QCoreApplication::translate("ServerConfigDialogBase", "Cor&ner Size:", nullptr));
        label_3->setText(QCoreApplication::translate("ServerConfigDialogBase", "px", nullptr));
        m_pGroupOptions->setTitle(QCoreApplication::translate("ServerConfigDialogBase", "&Options", nullptr));
        m_pCheckBoxRelativeMouseMoves->setText(QCoreApplication::translate("ServerConfigDialogBase", "Use &relative mouse moves", nullptr));
        m_pCheckBoxHeartbeat->setText(QCoreApplication::translate("ServerConfigDialogBase", "&Check clients every", nullptr));
        m_pLabel_16->setText(QCoreApplication::translate("ServerConfigDialogBase", "ms", nullptr));
        m_pCheckBoxIgnoreAutoConfigClient->setText(QCoreApplication::translate("ServerConfigDialogBase", "Ignore auto config clients", nullptr));
        m_pCheckBoxDisableLockToScreen->setText(QCoreApplication::translate("ServerConfigDialogBase", "Disable lock to screen", nullptr));
        m_pCheckBoxWin32KeepForeground->setText(QCoreApplication::translate("ServerConfigDialogBase", "Don't take &foreground window on Windows servers", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabAdvanced), QCoreApplication::translate("ServerConfigDialogBase", "Advanced server settings", nullptr));
        label_5->setText(QCoreApplication::translate("ServerConfigDialogBase", "<html><head/><body><p style=\"text-align: center; font-family: Arial; font-size: 18px; line-height: 25px;\">Config override</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("ServerConfigDialogBase", "<html><head/><body><p style=\"text-align: center; font-size: 13px; font-family: Arial; line-hegiht: 18px;\">If you have a config file and want to override all setttings with this file.</p></body></html>", nullptr));
        m_pCheckBoxUseExternalConfig->setText(QCoreApplication::translate("ServerConfigDialogBase", "Use configuration file", nullptr));
        m_pLabelConfigFile->setText(QCoreApplication::translate("ServerConfigDialogBase", "Config file path", nullptr));
        m_pButtonBrowseConfigFile->setText(QString());
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabAdvancedConfig), QCoreApplication::translate("ServerConfigDialogBase", "Advanced config", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerConfigDialogBase: public Ui_ServerConfigDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERCONFIGDIALOGBASE_H
