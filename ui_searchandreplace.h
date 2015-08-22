/********************************************************************************
** Form generated from reading UI file 'searchandreplace.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHANDREPLACE_H
#define UI_SEARCHANDREPLACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchAndReplace
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QCheckBox *checkReplace;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkCs;
    QCheckBox *checkWhole;
    QCheckBox *checkRegexp;
    QVBoxLayout *verticalLayout;
    QPushButton *pushFind;
    QPushButton *pushReplaceAndNext;
    QPushButton *pushReplaceAll;
    QPushButton *pushClose;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioUp;
    QRadioButton *radioDown;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineReplace;
    QLineEdit *lineFind;

    void setupUi(QDialog *SearchAndReplace)
    {
        if (SearchAndReplace->objectName().isEmpty())
            SearchAndReplace->setObjectName(QString::fromUtf8("SearchAndReplace"));
        SearchAndReplace->resize(370, 166);
        gridLayout_3 = new QGridLayout(SearchAndReplace);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(SearchAndReplace);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        checkReplace = new QCheckBox(SearchAndReplace);
        checkReplace->setObjectName(QString::fromUtf8("checkReplace"));

        gridLayout_3->addWidget(checkReplace, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(SearchAndReplace);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkCs = new QCheckBox(groupBox_2);
        checkCs->setObjectName(QString::fromUtf8("checkCs"));

        gridLayout_2->addWidget(checkCs, 0, 0, 1, 1);

        checkWhole = new QCheckBox(groupBox_2);
        checkWhole->setObjectName(QString::fromUtf8("checkWhole"));

        gridLayout_2->addWidget(checkWhole, 1, 0, 1, 1);

        checkRegexp = new QCheckBox(groupBox_2);
        checkRegexp->setObjectName(QString::fromUtf8("checkRegexp"));

        gridLayout_2->addWidget(checkRegexp, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushFind = new QPushButton(SearchAndReplace);
        pushFind->setObjectName(QString::fromUtf8("pushFind"));

        verticalLayout->addWidget(pushFind);

        pushReplaceAndNext = new QPushButton(SearchAndReplace);
        pushReplaceAndNext->setObjectName(QString::fromUtf8("pushReplaceAndNext"));
        pushReplaceAndNext->setEnabled(false);

        verticalLayout->addWidget(pushReplaceAndNext);

        pushReplaceAll = new QPushButton(SearchAndReplace);
        pushReplaceAll->setObjectName(QString::fromUtf8("pushReplaceAll"));
        pushReplaceAll->setEnabled(false);

        verticalLayout->addWidget(pushReplaceAll);

        pushClose = new QPushButton(SearchAndReplace);
        pushClose->setObjectName(QString::fromUtf8("pushClose"));

        verticalLayout->addWidget(pushClose);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout, 0, 3, 3, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(SearchAndReplace);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioUp = new QRadioButton(groupBox);
        radioUp->setObjectName(QString::fromUtf8("radioUp"));

        gridLayout->addWidget(radioUp, 0, 0, 1, 1);

        radioDown = new QRadioButton(groupBox);
        radioDown->setObjectName(QString::fromUtf8("radioDown"));

        gridLayout->addWidget(radioDown, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 2, 1, 1);

        lineReplace = new QLineEdit(SearchAndReplace);
        lineReplace->setObjectName(QString::fromUtf8("lineReplace"));
        lineReplace->setEnabled(false);

        gridLayout_3->addWidget(lineReplace, 1, 1, 1, 2);

        lineFind = new QLineEdit(SearchAndReplace);
        lineFind->setObjectName(QString::fromUtf8("lineFind"));

        gridLayout_3->addWidget(lineFind, 0, 1, 1, 2);

        QWidget::setTabOrder(lineFind, checkReplace);
        QWidget::setTabOrder(checkReplace, lineReplace);
        QWidget::setTabOrder(lineReplace, radioUp);
        QWidget::setTabOrder(radioUp, radioDown);
        QWidget::setTabOrder(radioDown, checkCs);
        QWidget::setTabOrder(checkCs, checkWhole);
        QWidget::setTabOrder(checkWhole, checkRegexp);
        QWidget::setTabOrder(checkRegexp, pushFind);
        QWidget::setTabOrder(pushFind, pushReplaceAndNext);
        QWidget::setTabOrder(pushReplaceAndNext, pushReplaceAll);
        QWidget::setTabOrder(pushReplaceAll, pushClose);

        retranslateUi(SearchAndReplace);
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), lineReplace, SLOT(setEnabled(bool)));
        QObject::connect(pushClose, SIGNAL(clicked()), SearchAndReplace, SLOT(accept()));
        QObject::connect(pushFind, SIGNAL(clicked()), SearchAndReplace, SLOT(find()));
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), pushReplaceAndNext, SLOT(setEnabled(bool)));
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), pushReplaceAll, SLOT(setEnabled(bool)));
        QObject::connect(pushReplaceAndNext, SIGNAL(clicked()), SearchAndReplace, SLOT(replaceAndNext()));
        QObject::connect(pushReplaceAll, SIGNAL(clicked()), SearchAndReplace, SLOT(slotReplaceAll()));
        QObject::connect(lineFind, SIGNAL(textChanged(QString)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkReplace, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(lineReplace, SIGNAL(textChanged(QString)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(radioUp, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkCs, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkWhole, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));
        QObject::connect(checkRegexp, SIGNAL(toggled(bool)), SearchAndReplace, SLOT(slotSearchChanged()));

        QMetaObject::connectSlotsByName(SearchAndReplace);
    } // setupUi

    void retranslateUi(QDialog *SearchAndReplace)
    {
        SearchAndReplace->setWindowTitle(QApplication::translate("SearchAndReplace", "Find and Replace", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SearchAndReplace", "Find:", 0, QApplication::UnicodeUTF8));
        checkReplace->setText(QApplication::translate("SearchAndReplace", "Replace with:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SearchAndReplace", "Options", 0, QApplication::UnicodeUTF8));
        checkCs->setText(QApplication::translate("SearchAndReplace", "Case sensitive", 0, QApplication::UnicodeUTF8));
        checkWhole->setText(QApplication::translate("SearchAndReplace", "Whole words", 0, QApplication::UnicodeUTF8));
        checkRegexp->setText(QApplication::translate("SearchAndReplace", "Regular expression", 0, QApplication::UnicodeUTF8));
        pushFind->setText(QApplication::translate("SearchAndReplace", "Find", 0, QApplication::UnicodeUTF8));
        pushReplaceAndNext->setText(QApplication::translate("SearchAndReplace", "Replace&&Next", 0, QApplication::UnicodeUTF8));
        pushReplaceAll->setText(QApplication::translate("SearchAndReplace", "Replace All", 0, QApplication::UnicodeUTF8));
        pushClose->setText(QApplication::translate("SearchAndReplace", "Close", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SearchAndReplace", "Direction", 0, QApplication::UnicodeUTF8));
        radioUp->setText(QApplication::translate("SearchAndReplace", "Up", 0, QApplication::UnicodeUTF8));
        radioDown->setText(QApplication::translate("SearchAndReplace", "Down", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchAndReplace: public Ui_SearchAndReplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHANDREPLACE_H
