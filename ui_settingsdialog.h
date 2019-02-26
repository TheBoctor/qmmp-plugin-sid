/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QSpinBox *defaultLengthSpinBox;
    QDialogButtonBox *buttonBox;
    QCheckBox *fastResampligCheckBox;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *sampleRateComboBox;
    QLineEdit *hvscPathLineEdit;
    QLabel *label;
    QCheckBox *useHVSCCheckBox;
    QLabel *label_3;
    QComboBox *emuComboBox;
    QComboBox *resamplingComboBox;
    QLabel *label_6;
    QLineEdit *romPathLineEdit;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(445, 310);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, -1, 6, 6);
        defaultLengthSpinBox = new QSpinBox(SettingsDialog);
        defaultLengthSpinBox->setObjectName(QStringLiteral("defaultLengthSpinBox"));
        defaultLengthSpinBox->setMinimum(5);
        defaultLengthSpinBox->setMaximum(1000);
        defaultLengthSpinBox->setValue(180);

        gridLayout->addWidget(defaultLengthSpinBox, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 10, 0, 1, 2);

        fastResampligCheckBox = new QCheckBox(SettingsDialog);
        fastResampligCheckBox->setObjectName(QStringLiteral("fastResampligCheckBox"));

        gridLayout->addWidget(fastResampligCheckBox, 9, 0, 1, 2);

        label_2 = new QLabel(SettingsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_5 = new QLabel(SettingsDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(SettingsDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        sampleRateComboBox = new QComboBox(SettingsDialog);
        sampleRateComboBox->setObjectName(QStringLiteral("sampleRateComboBox"));

        gridLayout->addWidget(sampleRateComboBox, 4, 1, 1, 1);

        hvscPathLineEdit = new QLineEdit(SettingsDialog);
        hvscPathLineEdit->setObjectName(QStringLiteral("hvscPathLineEdit"));
        hvscPathLineEdit->setEnabled(false);

        gridLayout->addWidget(hvscPathLineEdit, 1, 1, 1, 1);

        label = new QLabel(SettingsDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        useHVSCCheckBox = new QCheckBox(SettingsDialog);
        useHVSCCheckBox->setObjectName(QStringLiteral("useHVSCCheckBox"));

        gridLayout->addWidget(useHVSCCheckBox, 0, 0, 1, 2);

        label_3 = new QLabel(SettingsDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        emuComboBox = new QComboBox(SettingsDialog);
        emuComboBox->setObjectName(QStringLiteral("emuComboBox"));

        gridLayout->addWidget(emuComboBox, 6, 1, 1, 1);

        resamplingComboBox = new QComboBox(SettingsDialog);
        resamplingComboBox->setObjectName(QStringLiteral("resamplingComboBox"));

        gridLayout->addWidget(resamplingComboBox, 7, 1, 1, 1);

        label_6 = new QLabel(SettingsDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        romPathLineEdit = new QLineEdit(SettingsDialog);
        romPathLineEdit->setObjectName(QStringLiteral("romPathLineEdit"));
        romPathLineEdit->setEnabled(true);

        gridLayout->addWidget(romPathLineEdit, 2, 1, 1, 1);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));
        QObject::connect(useHVSCCheckBox, SIGNAL(toggled(bool)), hvscPathLineEdit, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "SID Plugin Settings", Q_NULLPTR));
        fastResampligCheckBox->setText(QApplication::translate("SettingsDialog", "Fast resampling", Q_NULLPTR));
        label_2->setText(QApplication::translate("SettingsDialog", "Sample rate:", Q_NULLPTR));
        label_5->setText(QApplication::translate("SettingsDialog", "HVSC database file:", Q_NULLPTR));
        label_4->setText(QApplication::translate("SettingsDialog", "Resampling method:", Q_NULLPTR));
        label->setText(QApplication::translate("SettingsDialog", "Defaults song length, sec:", Q_NULLPTR));
        useHVSCCheckBox->setText(QApplication::translate("SettingsDialog", "Enable HVSC song length database", Q_NULLPTR));
        label_3->setText(QApplication::translate("SettingsDialog", "Emulation:", Q_NULLPTR));
        label_6->setText(QApplication::translate("SettingsDialog", "ROM path:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
