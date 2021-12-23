/********************************************************************************
** Form generated from reading UI file 'ScreenSettingsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSETTINGSDIALOGBASE_H
#define UI_SCREENSETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScreenSettingsDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLineEdit *m_pLineEditName;
    QLabel *m_pLabelNameError;
    QSpacerItem *verticalSpacer_2;
    QLabel *m_pLlabelModifierKeys;
    QFrame *m_pGroupModifiers;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *m_pComboBoxShift;
    QComboBox *m_pComboBoxCtrl;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *m_pComboBoxAlt;
    QComboBox *m_pComboBoxMeta;
    QLabel *label_6;
    QComboBox *m_pComboBoxSuper;
    QSpacerItem *verticalSpacer_4;
    QLabel *m_pLabelDeadCorners;
    QFrame *m_pGroupSwitchCorners;
    QGridLayout *gridLayout_2;
    QCheckBox *m_pCheckBoxCornerTopLeft;
    QCheckBox *m_pCheckBoxCornerBottomRight;
    QCheckBox *m_pCheckBoxCornerTopRight;
    QLabel *label;
    QCheckBox *m_pCheckBoxCornerBottomLeft;
    QSpinBox *m_pSpinBoxSwitchCornerSize;
    QSpacerItem *verticalSpacer_6;
    QLabel *m_LabelFixes;
    QFrame *m_pGroupFixes;
    QGridLayout *gridLayout_3;
    QCheckBox *m_pCheckBoxCapsLock;
    QCheckBox *m_pCheckBoxNumLock;
    QCheckBox *m_pCheckBoxScrollLock;
    QCheckBox *m_pCheckBoxXTest;
    QSpacerItem *verticalSpacer_8;
    QLabel *m_pLabelAliases;
    QFrame *m_pGroupAliases;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *m_pButtonAddAlias;
    QLineEdit *m_pLineEditAlias;
    QLabel *m_pLabelAliasError;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_7;
    QListWidget *m_pListAliases;
    QPushButton *m_pButtonRemoveAlias;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_9;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *ScreenSettingsDialogBase)
    {
        if (ScreenSettingsDialogBase->objectName().isEmpty())
            ScreenSettingsDialogBase->setObjectName(QString::fromUtf8("ScreenSettingsDialogBase"));
        ScreenSettingsDialogBase->resize(403, 675);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(ScreenSettingsDialogBase->sizePolicy().hasHeightForWidth());
        ScreenSettingsDialogBase->setSizePolicy(sizePolicy);
        ScreenSettingsDialogBase->setMinimumSize(QSize(400, 620));
        vboxLayout = new QVBoxLayout(ScreenSettingsDialogBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 12, 11, 15);
        groupBox = new QFrame(ScreenSettingsDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        groupBox->setFrameShape(QFrame::StyledPanel);
        groupBox->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 15, -1, 15);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        m_pLineEditName = new QLineEdit(groupBox);
        m_pLineEditName->setObjectName(QString::fromUtf8("m_pLineEditName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pLineEditName->sizePolicy().hasHeightForWidth());
        m_pLineEditName->setSizePolicy(sizePolicy2);
        m_pLineEditName->setMaxLength(255);

        gridLayout_4->addWidget(m_pLineEditName, 0, 1, 1, 1);

        m_pLabelNameError = new QLabel(groupBox);
        m_pLabelNameError->setObjectName(QString::fromUtf8("m_pLabelNameError"));
        sizePolicy1.setHeightForWidth(m_pLabelNameError->sizePolicy().hasHeightForWidth());
        m_pLabelNameError->setSizePolicy(sizePolicy1);
        m_pLabelNameError->setMinimumSize(QSize(0, 0));
        m_pLabelNameError->setStyleSheet(QString::fromUtf8("color: #EC4C47; \n"
"font-size: 13px; \n"
"font-family: Arial; \n"
"font-weight: bold;"));
        m_pLabelNameError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(m_pLabelNameError, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer_2);

        m_pLlabelModifierKeys = new QLabel(ScreenSettingsDialogBase);
        m_pLlabelModifierKeys->setObjectName(QString::fromUtf8("m_pLlabelModifierKeys"));
        sizePolicy1.setHeightForWidth(m_pLlabelModifierKeys->sizePolicy().hasHeightForWidth());
        m_pLlabelModifierKeys->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(m_pLlabelModifierKeys);

        m_pGroupModifiers = new QFrame(ScreenSettingsDialogBase);
        m_pGroupModifiers->setObjectName(QString::fromUtf8("m_pGroupModifiers"));
        m_pGroupModifiers->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        m_pGroupModifiers->setFrameShape(QFrame::StyledPanel);
        m_pGroupModifiers->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_pGroupModifiers);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(-1, 10, -1, 10);
        label_5 = new QLabel(m_pGroupModifiers);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(label_5, 0, 4, 1, 1);

        m_pComboBoxShift = new QComboBox(m_pGroupModifiers);
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->setObjectName(QString::fromUtf8("m_pComboBoxShift"));

        gridLayout->addWidget(m_pComboBoxShift, 0, 1, 1, 1);

        m_pComboBoxCtrl = new QComboBox(m_pGroupModifiers);
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->setObjectName(QString::fromUtf8("m_pComboBoxCtrl"));

        gridLayout->addWidget(m_pComboBoxCtrl, 1, 1, 1, 1);

        label_4 = new QLabel(m_pGroupModifiers);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_3 = new QLabel(m_pGroupModifiers);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(m_pGroupModifiers);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        m_pComboBoxAlt = new QComboBox(m_pGroupModifiers);
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->setObjectName(QString::fromUtf8("m_pComboBoxAlt"));

        gridLayout->addWidget(m_pComboBoxAlt, 2, 1, 1, 1);

        m_pComboBoxMeta = new QComboBox(m_pGroupModifiers);
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->setObjectName(QString::fromUtf8("m_pComboBoxMeta"));

        gridLayout->addWidget(m_pComboBoxMeta, 0, 5, 1, 1);

        label_6 = new QLabel(m_pGroupModifiers);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 4, 1, 1);

        m_pComboBoxSuper = new QComboBox(m_pGroupModifiers);
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->setObjectName(QString::fromUtf8("m_pComboBoxSuper"));

        gridLayout->addWidget(m_pComboBoxSuper, 1, 5, 1, 1);


        vboxLayout->addWidget(m_pGroupModifiers);

        verticalSpacer_4 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer_4);

        m_pLabelDeadCorners = new QLabel(ScreenSettingsDialogBase);
        m_pLabelDeadCorners->setObjectName(QString::fromUtf8("m_pLabelDeadCorners"));
        sizePolicy1.setHeightForWidth(m_pLabelDeadCorners->sizePolicy().hasHeightForWidth());
        m_pLabelDeadCorners->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(m_pLabelDeadCorners);

        m_pGroupSwitchCorners = new QFrame(ScreenSettingsDialogBase);
        m_pGroupSwitchCorners->setObjectName(QString::fromUtf8("m_pGroupSwitchCorners"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pGroupSwitchCorners->sizePolicy().hasHeightForWidth());
        m_pGroupSwitchCorners->setSizePolicy(sizePolicy3);
        m_pGroupSwitchCorners->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        m_pGroupSwitchCorners->setFrameShape(QFrame::StyledPanel);
        m_pGroupSwitchCorners->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(m_pGroupSwitchCorners);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(-1, 15, -1, 15);
        m_pCheckBoxCornerTopLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopLeft->setObjectName(QString::fromUtf8("m_pCheckBoxCornerTopLeft"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_pCheckBoxCornerTopLeft->sizePolicy().hasHeightForWidth());
        m_pCheckBoxCornerTopLeft->setSizePolicy(sizePolicy4);
        m_pCheckBoxCornerTopLeft->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(m_pCheckBoxCornerTopLeft, 0, 0, 1, 1);

        m_pCheckBoxCornerBottomRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomRight->setObjectName(QString::fromUtf8("m_pCheckBoxCornerBottomRight"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_pCheckBoxCornerBottomRight->sizePolicy().hasHeightForWidth());
        m_pCheckBoxCornerBottomRight->setSizePolicy(sizePolicy5);
        m_pCheckBoxCornerBottomRight->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(m_pCheckBoxCornerBottomRight, 1, 1, 1, 1);

        m_pCheckBoxCornerTopRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopRight->setObjectName(QString::fromUtf8("m_pCheckBoxCornerTopRight"));
        sizePolicy5.setHeightForWidth(m_pCheckBoxCornerTopRight->sizePolicy().hasHeightForWidth());
        m_pCheckBoxCornerTopRight->setSizePolicy(sizePolicy5);
        m_pCheckBoxCornerTopRight->setMinimumSize(QSize(0, 0));
        m_pCheckBoxCornerTopRight->setAutoRepeatInterval(100);

        gridLayout_2->addWidget(m_pCheckBoxCornerTopRight, 0, 1, 1, 1);

        label = new QLabel(m_pGroupSwitchCorners);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        m_pCheckBoxCornerBottomLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomLeft->setObjectName(QString::fromUtf8("m_pCheckBoxCornerBottomLeft"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(m_pCheckBoxCornerBottomLeft->sizePolicy().hasHeightForWidth());
        m_pCheckBoxCornerBottomLeft->setSizePolicy(sizePolicy7);
        m_pCheckBoxCornerBottomLeft->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(m_pCheckBoxCornerBottomLeft, 1, 0, 1, 1);

        m_pSpinBoxSwitchCornerSize = new QSpinBox(m_pGroupSwitchCorners);
        m_pSpinBoxSwitchCornerSize->setObjectName(QString::fromUtf8("m_pSpinBoxSwitchCornerSize"));
        sizePolicy1.setHeightForWidth(m_pSpinBoxSwitchCornerSize->sizePolicy().hasHeightForWidth());
        m_pSpinBoxSwitchCornerSize->setSizePolicy(sizePolicy1);
        m_pSpinBoxSwitchCornerSize->setMinimumSize(QSize(70, 0));

        gridLayout_2->addWidget(m_pSpinBoxSwitchCornerSize, 0, 3, 1, 1);


        vboxLayout->addWidget(m_pGroupSwitchCorners);

        verticalSpacer_6 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer_6);

        m_LabelFixes = new QLabel(ScreenSettingsDialogBase);
        m_LabelFixes->setObjectName(QString::fromUtf8("m_LabelFixes"));
        sizePolicy1.setHeightForWidth(m_LabelFixes->sizePolicy().hasHeightForWidth());
        m_LabelFixes->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(m_LabelFixes);

        m_pGroupFixes = new QFrame(ScreenSettingsDialogBase);
        m_pGroupFixes->setObjectName(QString::fromUtf8("m_pGroupFixes"));
        m_pGroupFixes->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        m_pGroupFixes->setFrameShape(QFrame::StyledPanel);
        m_pGroupFixes->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(m_pGroupFixes);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(16);
        gridLayout_3->setContentsMargins(-1, 15, -1, 15);
        m_pCheckBoxCapsLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxCapsLock->setObjectName(QString::fromUtf8("m_pCheckBoxCapsLock"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(m_pCheckBoxCapsLock->sizePolicy().hasHeightForWidth());
        m_pCheckBoxCapsLock->setSizePolicy(sizePolicy8);

        gridLayout_3->addWidget(m_pCheckBoxCapsLock, 0, 0, 1, 1);

        m_pCheckBoxNumLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxNumLock->setObjectName(QString::fromUtf8("m_pCheckBoxNumLock"));
        sizePolicy8.setHeightForWidth(m_pCheckBoxNumLock->sizePolicy().hasHeightForWidth());
        m_pCheckBoxNumLock->setSizePolicy(sizePolicy8);

        gridLayout_3->addWidget(m_pCheckBoxNumLock, 1, 0, 1, 1);

        m_pCheckBoxScrollLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxScrollLock->setObjectName(QString::fromUtf8("m_pCheckBoxScrollLock"));
        sizePolicy8.setHeightForWidth(m_pCheckBoxScrollLock->sizePolicy().hasHeightForWidth());
        m_pCheckBoxScrollLock->setSizePolicy(sizePolicy8);

        gridLayout_3->addWidget(m_pCheckBoxScrollLock, 0, 1, 1, 1);

        m_pCheckBoxXTest = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxXTest->setObjectName(QString::fromUtf8("m_pCheckBoxXTest"));
        sizePolicy8.setHeightForWidth(m_pCheckBoxXTest->sizePolicy().hasHeightForWidth());
        m_pCheckBoxXTest->setSizePolicy(sizePolicy8);
        m_pCheckBoxXTest->setChecked(false);

        gridLayout_3->addWidget(m_pCheckBoxXTest, 1, 1, 1, 1);


        vboxLayout->addWidget(m_pGroupFixes);

        verticalSpacer_8 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer_8);

        m_pLabelAliases = new QLabel(ScreenSettingsDialogBase);
        m_pLabelAliases->setObjectName(QString::fromUtf8("m_pLabelAliases"));
        sizePolicy1.setHeightForWidth(m_pLabelAliases->sizePolicy().hasHeightForWidth());
        m_pLabelAliases->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(m_pLabelAliases);

        m_pGroupAliases = new QFrame(ScreenSettingsDialogBase);
        m_pGroupAliases->setObjectName(QString::fromUtf8("m_pGroupAliases"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(m_pGroupAliases->sizePolicy().hasHeightForWidth());
        m_pGroupAliases->setSizePolicy(sizePolicy9);
        m_pGroupAliases->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"border: 1px solid  rgba(192,192,192, 0.2);\n"
"border-radius: 4px;\n"
"background-color: rgba(192,192,192, 0.1);\n"
"}"));
        m_pGroupAliases->setFrameShape(QFrame::StyledPanel);
        m_pGroupAliases->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(m_pGroupAliases);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        m_pButtonAddAlias = new QPushButton(m_pGroupAliases);
        m_pButtonAddAlias->setObjectName(QString::fromUtf8("m_pButtonAddAlias"));
        m_pButtonAddAlias->setEnabled(false);
        sizePolicy6.setHeightForWidth(m_pButtonAddAlias->sizePolicy().hasHeightForWidth());
        m_pButtonAddAlias->setSizePolicy(sizePolicy6);
        m_pButtonAddAlias->setMinimumSize(QSize(43, 20));
        m_pButtonAddAlias->setLayoutDirection(Qt::LeftToRight);
        m_pButtonAddAlias->setStyleSheet(QString::fromUtf8("QPushButton#m_pButtonAddAlias{\n"
"left: 30px;\n"
"}"));

        gridLayout_5->addWidget(m_pButtonAddAlias, 2, 1, 1, 1);

        m_pLineEditAlias = new QLineEdit(m_pGroupAliases);
        m_pLineEditAlias->setObjectName(QString::fromUtf8("m_pLineEditAlias"));
        sizePolicy2.setHeightForWidth(m_pLineEditAlias->sizePolicy().hasHeightForWidth());
        m_pLineEditAlias->setSizePolicy(sizePolicy2);
        m_pLineEditAlias->setMinimumSize(QSize(168, 20));
        m_pLineEditAlias->setStyleSheet(QString::fromUtf8(""));
        m_pLineEditAlias->setMaxLength(255);

        gridLayout_5->addWidget(m_pLineEditAlias, 0, 0, 1, 2);

        m_pLabelAliasError = new QLabel(m_pGroupAliases);
        m_pLabelAliasError->setObjectName(QString::fromUtf8("m_pLabelAliasError"));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(m_pLabelAliasError->sizePolicy().hasHeightForWidth());
        m_pLabelAliasError->setSizePolicy(sizePolicy10);
        m_pLabelAliasError->setMinimumSize(QSize(0, 0));
        m_pLabelAliasError->setMaximumSize(QSize(16777215, 16777215));
        m_pLabelAliasError->setStyleSheet(QString::fromUtf8("color: #EC4C47; \n"
"font-size: 13px; \n"
"font-family: Arial; \n"
"font-weight: bold;"));
        m_pLabelAliasError->setWordWrap(true);

        gridLayout_5->addWidget(m_pLabelAliasError, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 3, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout_5);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(6);
        gridLayout_7->setContentsMargins(-1, 0, -1, -1);
        m_pListAliases = new QListWidget(m_pGroupAliases);
        m_pListAliases->setObjectName(QString::fromUtf8("m_pListAliases"));
        sizePolicy9.setHeightForWidth(m_pListAliases->sizePolicy().hasHeightForWidth());
        m_pListAliases->setSizePolicy(sizePolicy9);
        m_pListAliases->setMinimumSize(QSize(0, 0));
        m_pListAliases->setMaximumSize(QSize(16777215, 16777215));
        m_pListAliases->setStyleSheet(QString::fromUtf8(""));
        m_pListAliases->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_7->addWidget(m_pListAliases, 0, 0, 1, 2);

        m_pButtonRemoveAlias = new QPushButton(m_pGroupAliases);
        m_pButtonRemoveAlias->setObjectName(QString::fromUtf8("m_pButtonRemoveAlias"));
        m_pButtonRemoveAlias->setEnabled(false);
        m_pButtonRemoveAlias->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(m_pButtonRemoveAlias, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_7);


        vboxLayout->addWidget(m_pGroupAliases);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer_9);

        m_pButtonBox = new QDialogButtonBox(ScreenSettingsDialogBase);
        m_pButtonBox->setObjectName(QString::fromUtf8("m_pButtonBox"));
        m_pButtonBox->setMinimumSize(QSize(0, 0));
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        vboxLayout->addWidget(m_pButtonBox);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(m_pLineEditName);
        label_5->setBuddy(m_pComboBoxMeta);
        label_4->setBuddy(m_pComboBoxAlt);
        label_3->setBuddy(m_pComboBoxCtrl);
        label_2->setBuddy(m_pComboBoxShift);
        label_6->setBuddy(m_pComboBoxSuper);
        label->setBuddy(m_pSpinBoxSwitchCornerSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ScreenSettingsDialogBase);
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), ScreenSettingsDialogBase, SLOT(accept()));
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), ScreenSettingsDialogBase, SLOT(reject()));

        m_pComboBoxCtrl->setCurrentIndex(1);
        m_pComboBoxAlt->setCurrentIndex(2);
        m_pComboBoxMeta->setCurrentIndex(3);
        m_pComboBoxSuper->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ScreenSettingsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ScreenSettingsDialogBase)
    {
        ScreenSettingsDialogBase->setWindowTitle(QCoreApplication::translate("ScreenSettingsDialogBase", "Computer settings", nullptr));
        label_7->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Computer &name", nullptr));
        m_pLabelNameError->setText(QString());
        m_pLlabelModifierKeys->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Modifier keys", nullptr));
        label_5->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "M&eta", nullptr));
        m_pComboBoxShift->setItemText(0, QCoreApplication::translate("ScreenSettingsDialogBase", "Shift", nullptr));
        m_pComboBoxShift->setItemText(1, QCoreApplication::translate("ScreenSettingsDialogBase", "Ctrl", nullptr));
        m_pComboBoxShift->setItemText(2, QCoreApplication::translate("ScreenSettingsDialogBase", "Alt", nullptr));
        m_pComboBoxShift->setItemText(3, QCoreApplication::translate("ScreenSettingsDialogBase", "Meta", nullptr));
        m_pComboBoxShift->setItemText(4, QCoreApplication::translate("ScreenSettingsDialogBase", "Super", nullptr));
        m_pComboBoxShift->setItemText(5, QCoreApplication::translate("ScreenSettingsDialogBase", "None", nullptr));

        m_pComboBoxCtrl->setItemText(0, QCoreApplication::translate("ScreenSettingsDialogBase", "Shift", nullptr));
        m_pComboBoxCtrl->setItemText(1, QCoreApplication::translate("ScreenSettingsDialogBase", "Ctrl", nullptr));
        m_pComboBoxCtrl->setItemText(2, QCoreApplication::translate("ScreenSettingsDialogBase", "Alt", nullptr));
        m_pComboBoxCtrl->setItemText(3, QCoreApplication::translate("ScreenSettingsDialogBase", "Meta", nullptr));
        m_pComboBoxCtrl->setItemText(4, QCoreApplication::translate("ScreenSettingsDialogBase", "Super", nullptr));
        m_pComboBoxCtrl->setItemText(5, QCoreApplication::translate("ScreenSettingsDialogBase", "None", nullptr));

        label_4->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Al&t", nullptr));
        label_3->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "&Ctrl", nullptr));
        label_2->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "&Shift", nullptr));
        m_pComboBoxAlt->setItemText(0, QCoreApplication::translate("ScreenSettingsDialogBase", "Shift", nullptr));
        m_pComboBoxAlt->setItemText(1, QCoreApplication::translate("ScreenSettingsDialogBase", "Ctrl", nullptr));
        m_pComboBoxAlt->setItemText(2, QCoreApplication::translate("ScreenSettingsDialogBase", "Alt", nullptr));
        m_pComboBoxAlt->setItemText(3, QCoreApplication::translate("ScreenSettingsDialogBase", "Meta", nullptr));
        m_pComboBoxAlt->setItemText(4, QCoreApplication::translate("ScreenSettingsDialogBase", "Super", nullptr));
        m_pComboBoxAlt->setItemText(5, QCoreApplication::translate("ScreenSettingsDialogBase", "None", nullptr));

        m_pComboBoxMeta->setItemText(0, QCoreApplication::translate("ScreenSettingsDialogBase", "Shift", nullptr));
        m_pComboBoxMeta->setItemText(1, QCoreApplication::translate("ScreenSettingsDialogBase", "Ctrl", nullptr));
        m_pComboBoxMeta->setItemText(2, QCoreApplication::translate("ScreenSettingsDialogBase", "Alt", nullptr));
        m_pComboBoxMeta->setItemText(3, QCoreApplication::translate("ScreenSettingsDialogBase", "Meta", nullptr));
        m_pComboBoxMeta->setItemText(4, QCoreApplication::translate("ScreenSettingsDialogBase", "Super", nullptr));
        m_pComboBoxMeta->setItemText(5, QCoreApplication::translate("ScreenSettingsDialogBase", "None", nullptr));

        label_6->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "S&uper", nullptr));
        m_pComboBoxSuper->setItemText(0, QCoreApplication::translate("ScreenSettingsDialogBase", "Shift", nullptr));
        m_pComboBoxSuper->setItemText(1, QCoreApplication::translate("ScreenSettingsDialogBase", "Ctrl", nullptr));
        m_pComboBoxSuper->setItemText(2, QCoreApplication::translate("ScreenSettingsDialogBase", "Alt", nullptr));
        m_pComboBoxSuper->setItemText(3, QCoreApplication::translate("ScreenSettingsDialogBase", "Meta", nullptr));
        m_pComboBoxSuper->setItemText(4, QCoreApplication::translate("ScreenSettingsDialogBase", "Super", nullptr));
        m_pComboBoxSuper->setItemText(5, QCoreApplication::translate("ScreenSettingsDialogBase", "None", nullptr));

        m_pLabelDeadCorners->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Dead corners defaults", nullptr));
        m_pCheckBoxCornerTopLeft->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Top-left", nullptr));
        m_pCheckBoxCornerBottomRight->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Bottom-right", nullptr));
        m_pCheckBoxCornerTopRight->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Top-right", nullptr));
        label->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Corner si&ze", nullptr));
        m_pCheckBoxCornerBottomLeft->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Bottom-left", nullptr));
        m_LabelFixes->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Fixes", nullptr));
        m_pCheckBoxCapsLock->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "CAPS LOCK key", nullptr));
        m_pCheckBoxNumLock->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "NUM LOCK key", nullptr));
        m_pCheckBoxScrollLock->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "SCROLL LOCK key", nullptr));
        m_pCheckBoxXTest->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "XTest for Xinerama", nullptr));
        m_pLabelAliases->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "Aliases", nullptr));
        m_pButtonAddAlias->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "&Add", nullptr));
        m_pLabelAliasError->setText(QString());
        m_pButtonRemoveAlias->setText(QCoreApplication::translate("ScreenSettingsDialogBase", "&Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenSettingsDialogBase: public Ui_ScreenSettingsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSETTINGSDIALOGBASE_H
