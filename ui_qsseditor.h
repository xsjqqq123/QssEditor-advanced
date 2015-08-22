/********************************************************************************
** Form generated from reading UI file 'qsseditor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSSEDITOR_H
#define UI_QSSEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDateEdit>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDial>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMdiArea>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QScrollBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Qsci/qsciscintilla.h"

QT_BEGIN_NAMESPACE

class Ui_QssEditor
{
public:
    QHBoxLayout *horizontalLayout_7;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolOpen;
    QToolButton *toolSave;
    QToolButton *toolSaveAs;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *toolClose;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolUndo;
    QToolButton *toolRedo;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolOptions;
    QToolButton *toolAbout;
    QToolButton *toolAboutQt;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *disablebBtn;
    QPushButton *enableBtn;
    QsciScintilla *text;
    QWidget *widgetAllWidgets;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelPreview;
    QSpacerItem *horizontalSpacer_5;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QCommandLinkButton *commandLinkButton;
    QCheckBox *checkBox;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxReadOnly;
    QComboBox *comboBoxEditable;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QFrame *frame;
    QGridLayout *gridLayout_10;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QSlider *verticalSlider_2;
    QSlider *horizontalSlider_2;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QFrame *line;
    QGridLayout *gridLayout_12;
    QDial *dial;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QListWidget *listWidgetIcons;
    QTableWidget *table;
    QTreeWidget *tree;
    QWidget *tab;
    QGridLayout *gridLayout_11;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QCalendarWidget *calendarWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_2;
    QMdiArea *mdiArea;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QWidget *page_6;
    QGridLayout *gridLayout_8;
    QLabel *label_9;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *QssEditor)
    {
        if (QssEditor->objectName().isEmpty())
            QssEditor->setObjectName(QString::fromUtf8("QssEditor"));
        QssEditor->resize(915, 520);
        horizontalLayout_7 = new QHBoxLayout(QssEditor);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        splitter = new QSplitter(QssEditor);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolOpen = new QToolButton(layoutWidget);
        toolOpen->setObjectName(QString::fromUtf8("toolOpen"));

        horizontalLayout->addWidget(toolOpen);

        toolSave = new QToolButton(layoutWidget);
        toolSave->setObjectName(QString::fromUtf8("toolSave"));
        toolSave->setEnabled(false);

        horizontalLayout->addWidget(toolSave);

        toolSaveAs = new QToolButton(layoutWidget);
        toolSaveAs->setObjectName(QString::fromUtf8("toolSaveAs"));

        horizontalLayout->addWidget(toolSaveAs);

        horizontalSpacer_4 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        toolClose = new QToolButton(layoutWidget);
        toolClose->setObjectName(QString::fromUtf8("toolClose"));
        toolClose->setEnabled(false);

        horizontalLayout->addWidget(toolClose);

        horizontalSpacer = new QSpacerItem(0, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolUndo = new QToolButton(layoutWidget);
        toolUndo->setObjectName(QString::fromUtf8("toolUndo"));

        horizontalLayout->addWidget(toolUndo);

        toolRedo = new QToolButton(layoutWidget);
        toolRedo->setObjectName(QString::fromUtf8("toolRedo"));

        horizontalLayout->addWidget(toolRedo);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        toolOptions = new QToolButton(layoutWidget);
        toolOptions->setObjectName(QString::fromUtf8("toolOptions"));

        horizontalLayout->addWidget(toolOptions);

        toolAbout = new QToolButton(layoutWidget);
        toolAbout->setObjectName(QString::fromUtf8("toolAbout"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/qsseditor.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolAbout->setIcon(icon);

        horizontalLayout->addWidget(toolAbout);

        toolAboutQt = new QToolButton(layoutWidget);
        toolAboutQt->setObjectName(QString::fromUtf8("toolAboutQt"));

        horizontalLayout->addWidget(toolAboutQt);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        disablebBtn = new QPushButton(layoutWidget);
        disablebBtn->setObjectName(QString::fromUtf8("disablebBtn"));

        horizontalLayout_11->addWidget(disablebBtn);

        enableBtn = new QPushButton(layoutWidget);
        enableBtn->setObjectName(QString::fromUtf8("enableBtn"));

        horizontalLayout_11->addWidget(enableBtn);


        horizontalLayout->addLayout(horizontalLayout_11);


        verticalLayout->addLayout(horizontalLayout);

        text = new QsciScintilla(layoutWidget);
        text->setObjectName(QString::fromUtf8("text"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(text);

        splitter->addWidget(layoutWidget);
        widgetAllWidgets = new QWidget(splitter);
        widgetAllWidgets->setObjectName(QString::fromUtf8("widgetAllWidgets"));
        verticalLayout_3 = new QVBoxLayout(widgetAllWidgets);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        labelPreview = new QLabel(widgetAllWidgets);
        labelPreview->setObjectName(QString::fromUtf8("labelPreview"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        labelPreview->setFont(font);
        labelPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelPreview);

        horizontalSpacer_5 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_12);

        tabWidget = new QTabWidget(widgetAllWidgets);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabsClosable(true);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        gridLayout_13 = new QGridLayout(tab_1);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radioButton = new QRadioButton(tab_1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setText(QString::fromUtf8("RadioButton"));

        gridLayout_6->addWidget(radioButton, 0, 0, 1, 1);

        pushButton = new QPushButton(tab_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setText(QString::fromUtf8("PushButton"));
        pushButton->setCheckable(true);

        gridLayout_6->addWidget(pushButton, 0, 1, 1, 1);

        progressBar = new QProgressBar(tab_1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(20);
        progressBar->setValue(0);

        gridLayout_6->addWidget(progressBar, 0, 2, 1, 1);

        commandLinkButton = new QCommandLinkButton(tab_1);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setText(QString::fromUtf8("CommandLinkButton"));

        gridLayout_6->addWidget(commandLinkButton, 0, 3, 2, 1);

        checkBox = new QCheckBox(tab_1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setText(QString::fromUtf8("CheckBox"));
        checkBox->setTristate(true);

        gridLayout_6->addWidget(checkBox, 1, 0, 1, 1);

        toolButton = new QToolButton(tab_1);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setText(QString::fromUtf8("ToolButton"));
        toolButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout_6->addWidget(toolButton, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBoxReadOnly = new QComboBox(tab_1);
        comboBoxReadOnly->insertItems(0, QStringList()
         << QString::fromUtf8("1")
         << QString::fromUtf8("2")
         << QString::fromUtf8("3")
        );
        comboBoxReadOnly->setObjectName(QString::fromUtf8("comboBoxReadOnly"));
        sizePolicy1.setHeightForWidth(comboBoxReadOnly->sizePolicy().hasHeightForWidth());
        comboBoxReadOnly->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBoxReadOnly);

        comboBoxEditable = new QComboBox(tab_1);
        comboBoxEditable->insertItems(0, QStringList()
         << QString::fromUtf8("1")
         << QString::fromUtf8("2")
         << QString::fromUtf8("3")
        );
        comboBoxEditable->setObjectName(QString::fromUtf8("comboBoxEditable"));
        sizePolicy1.setHeightForWidth(comboBoxEditable->sizePolicy().hasHeightForWidth());
        comboBoxEditable->setSizePolicy(sizePolicy1);
        comboBoxEditable->setEditable(true);

        horizontalLayout_3->addWidget(comboBoxEditable);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(tab_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        spinBox = new QSpinBox(tab_1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_5->addWidget(spinBox);

        doubleSpinBox = new QDoubleSpinBox(tab_1);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout_5->addWidget(doubleSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(tab_1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setText(QString::fromUtf8("Line edit"));

        horizontalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(tab_1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setText(QString::fromUtf8("Password"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        gridLayout_13->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(tab_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        timeEdit = new QTimeEdit(tab_1);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        horizontalLayout_4->addWidget(timeEdit);

        dateEdit = new QDateEdit(tab_1);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);

        dateTimeEdit = new QDateTimeEdit(tab_1);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        horizontalLayout_4->addWidget(dateTimeEdit);


        gridLayout_13->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("Label with <a href=\"http://google.com\">link</a>"));

        horizontalLayout_8->addWidget(label);

        lcdNumber = new QLCDNumber(tab_1);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setDigitCount(10);
        lcdNumber->setProperty("intValue", QVariant(1234567890));

        horizontalLayout_8->addWidget(lcdNumber);

        frame = new QFrame(tab_1);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("QFrame around this text."));

        gridLayout_10->addWidget(label_2, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(frame);


        gridLayout_13->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(tab_1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 3, 0, 1, 1);

        verticalSlider_2 = new QSlider(tab_1);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(verticalSlider_2, 0, 2, 1, 1);

        horizontalSlider_2 = new QSlider(tab_1);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_2, 2, 0, 1, 3);

        verticalSlider = new QSlider(tab_1);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setValue(30);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout_5->addWidget(verticalSlider, 0, 0, 1, 1);

        horizontalSlider = new QSlider(tab_1);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy3);
        horizontalSlider->setValue(30);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout_5->addWidget(horizontalSlider, 1, 0, 1, 3);

        line = new QFrame(tab_1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 3, 1, 1, 2);


        horizontalLayout_9->addLayout(gridLayout_5);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        dial = new QDial(tab_1);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setNotchesVisible(true);

        gridLayout_12->addWidget(dial, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);


        gridLayout_12->addWidget(groupBox_2, 0, 1, 1, 1);

        verticalScrollBar = new QScrollBar(tab_1);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_12->addWidget(verticalScrollBar, 0, 2, 2, 1);

        horizontalScrollBar = new QScrollBar(tab_1);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout_12->addWidget(horizontalScrollBar, 1, 0, 1, 2);


        horizontalLayout_9->addLayout(gridLayout_12);

        scrollArea_2 = new QScrollArea(tab_1);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 118, 168));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 60));

        gridLayout_7->addWidget(pushButton_2, 1, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_9->addWidget(scrollArea_2);


        gridLayout_13->addLayout(horizontalLayout_9, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_2 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(tab_1);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_10->addWidget(buttonBox);


        gridLayout_13->addLayout(horizontalLayout_10, 5, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QString::fromUtf8("Common"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(tab_2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/battery.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setText(QString::fromUtf8("I1"));
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/image-sunset.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setText(QString::fromUtf8("I2"));
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setText(QString::fromUtf8("I3"));
        __qlistwidgetitem2->setIcon(icon3);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setText(QString::fromUtf8("I4"));
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setText(QString::fromUtf8("I5"));
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setText(QString::fromUtf8("I6"));
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setText(QString::fromUtf8("I7"));
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setText(QString::fromUtf8("I8"));
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget);
        __qlistwidgetitem8->setText(QString::fromUtf8("I9"));
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget);
        __qlistwidgetitem9->setText(QString::fromUtf8("I10"));
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidget);
        __qlistwidgetitem10->setText(QString::fromUtf8("I11"));
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidget);
        __qlistwidgetitem11->setText(QString::fromUtf8("I12"));
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listWidget);
        __qlistwidgetitem12->setText(QString::fromUtf8("I14"));
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listWidget);
        __qlistwidgetitem13->setText(QString::fromUtf8("I15"));
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(listWidget);
        __qlistwidgetitem14->setText(QString::fromUtf8("I16"));
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(listWidget);
        __qlistwidgetitem15->setText(QString::fromUtf8("I17"));
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(listWidget);
        __qlistwidgetitem16->setText(QString::fromUtf8("I18"));
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(listWidget);
        __qlistwidgetitem17->setText(QString::fromUtf8("I19"));
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(listWidget);
        __qlistwidgetitem18->setText(QString::fromUtf8("I20"));
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        listWidgetIcons = new QListWidget(tab_2);
        QListWidgetItem *__qlistwidgetitem19 = new QListWidgetItem(listWidgetIcons);
        __qlistwidgetitem19->setText(QString::fromUtf8("I1"));
        __qlistwidgetitem19->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem20 = new QListWidgetItem(listWidgetIcons);
        __qlistwidgetitem20->setText(QString::fromUtf8("I2"));
        __qlistwidgetitem20->setIcon(icon2);
        QListWidgetItem *__qlistwidgetitem21 = new QListWidgetItem(listWidgetIcons);
        __qlistwidgetitem21->setText(QString::fromUtf8("I3"));
        __qlistwidgetitem21->setIcon(icon3);
        listWidgetIcons->setObjectName(QString::fromUtf8("listWidgetIcons"));
        listWidgetIcons->setFlow(QListView::LeftToRight);
        listWidgetIcons->setViewMode(QListView::IconMode);

        gridLayout_2->addWidget(listWidgetIcons, 0, 1, 1, 1);

        table = new QTableWidget(tab_2);
        if (table->columnCount() < 8)
            table->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QString::fromUtf8("C1"));
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setText(QString::fromUtf8("C2"));
        table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (table->rowCount() < 8)
            table->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setText(QString::fromUtf8("R1"));
        table->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setText(QString::fromUtf8("R2"));
        table->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setText(QString::fromUtf8("R3"));
        table->setVerticalHeaderItem(7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setText(QString::fromUtf8("1,1"));
        table->setItem(0, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setText(QString::fromUtf8("1,2"));
        table->setItem(0, 7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setText(QString::fromUtf8("2,1"));
        table->setItem(6, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setText(QString::fromUtf8("2,2"));
        table->setItem(6, 7, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setText(QString::fromUtf8("3,1"));
        __qtablewidgetitem20->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        table->setItem(7, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setText(QString::fromUtf8("2,3"));
        __qtablewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        table->setItem(7, 7, __qtablewidgetitem21);
        table->setObjectName(QString::fromUtf8("table"));
        table->setSortingEnabled(true);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_2->addWidget(table, 1, 0, 1, 1);

        tree = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QString::fromUtf8("C2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("C1"));
        tree->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(tree);
        __qtreewidgetitem1->setText(0, QString::fromUtf8("R1"));
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setText(3, QString::fromUtf8("X1"));
        __qtreewidgetitem2->setCheckState(3, Qt::Checked);
        __qtreewidgetitem2->setText(0, QString::fromUtf8("C1"));
        __qtreewidgetitem2->setCheckState(0, Qt::Checked);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setText(3, QString::fromUtf8("X2"));
        __qtreewidgetitem3->setCheckState(3, Qt::PartiallyChecked);
        __qtreewidgetitem3->setText(0, QString::fromUtf8("C2"));
        __qtreewidgetitem3->setCheckState(0, Qt::PartiallyChecked);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        __qtreewidgetitem4->setText(3, QString::fromUtf8("X3"));
        __qtreewidgetitem4->setText(0, QString::fromUtf8("C3"));
        new QTreeWidgetItem(tree);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(tree);
        __qtreewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        __qtreewidgetitem5->setText(0, QString::fromUtf8("R2"));
        new QTreeWidgetItem(tree);
        new QTreeWidgetItem(tree);
        new QTreeWidgetItem(tree);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setAllColumnsShowFocus(true);
        tree->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_2->addWidget(tree, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString::fromUtf8("DataView"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_11 = new QGridLayout(tab);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setUndoRedoEnabled(true);
        textBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">QTextBrowser</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Text </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">browser</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> </span><span style=\" font-family:'MS"
                        " Shell Dlg 2'; font-size:8pt; font-style:italic;\">with</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline;\">some</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600; font-style:italic;\">text </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">and </span><a href=\"http://google.com\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">links</span></a></p></body></html>"));
        textBrowser->setOpenLinks(false);

        gridLayout_11->addWidget(textBrowser, 0, 0, 1, 1);

        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">QTextEdit</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">QTextEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">QTextEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
                        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#ee0808;\">QTextEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"www.hao123.com\"><span style=\" text-decoration: underline; color:#0000ff;\">QTextEdit</span></a></p></body></html>"));

        gridLayout_11->addWidget(textEdit, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_11->addWidget(calendarWidget, 1, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout = new QGridLayout(tab_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolBox = new QToolBox(tab_3);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(100, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page, QString::fromUtf8("Toolbox1"));
        toolBox->setItemText(toolBox->indexOf(page), QString::fromUtf8("Toolbox1"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_3, QString::fromUtf8("\351\241\265"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_4, QString::fromUtf8("\351\241\265"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 100, 263));
        toolBox->addItem(page_2, QString::fromUtf8("Toolbox2"));
        toolBox->setItemText(toolBox->indexOf(page_2), QString::fromUtf8("Toolbox2"));

        gridLayout->addWidget(toolBox, 0, 0, 2, 1);

        mdiArea = new QMdiArea(tab_3);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(2);
        sizePolicy4.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(mdiArea, 0, 1, 1, 3);

        stackedWidget = new QStackedWidget(tab_3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(120, 130));
        stackedWidget->setMaximumSize(QSize(160, 180));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_4 = new QGridLayout(page_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(page_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_8 = new QGridLayout(page_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_9 = new QLabel(page_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_8->addWidget(label_9, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 1);

        dockWidget = new QDockWidget(tab_3);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy5);
        dockWidget->setMinimumSize(QSize(120, 60));
        dockWidget->setWindowTitle(QString::fromUtf8("QDockwidget"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(dockWidgetContents_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents_3);

        gridLayout->addWidget(dockWidget, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString::fromUtf8("Container"));
        mdiArea->raise();
        dockWidget->raise();
        toolBox->raise();
        stackedWidget->raise();

        verticalLayout_3->addWidget(tabWidget);

        splitter->addWidget(widgetAllWidgets);

        horizontalLayout_7->addWidget(splitter);

        QWidget::setTabOrder(toolOpen, toolSave);
        QWidget::setTabOrder(toolSave, toolSaveAs);
        QWidget::setTabOrder(toolSaveAs, toolClose);
        QWidget::setTabOrder(toolClose, toolUndo);
        QWidget::setTabOrder(toolUndo, toolRedo);
        QWidget::setTabOrder(toolRedo, toolOptions);
        QWidget::setTabOrder(toolOptions, toolAbout);
        QWidget::setTabOrder(toolAbout, toolAboutQt);
        QWidget::setTabOrder(toolAboutQt, tabWidget);
        QWidget::setTabOrder(tabWidget, radioButton);
        QWidget::setTabOrder(radioButton, checkBox);
        QWidget::setTabOrder(checkBox, pushButton);
        QWidget::setTabOrder(pushButton, toolButton);
        QWidget::setTabOrder(toolButton, comboBoxReadOnly);
        QWidget::setTabOrder(comboBoxReadOnly, comboBoxEditable);
        QWidget::setTabOrder(comboBoxEditable, spinBox);
        QWidget::setTabOrder(spinBox, doubleSpinBox);
        QWidget::setTabOrder(doubleSpinBox, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, timeEdit);
        QWidget::setTabOrder(timeEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, verticalSlider);
        QWidget::setTabOrder(verticalSlider, horizontalSlider);
        QWidget::setTabOrder(horizontalSlider, dial);
        QWidget::setTabOrder(dial, commandLinkButton);
        QWidget::setTabOrder(commandLinkButton, listWidget);
        QWidget::setTabOrder(listWidget, listWidgetIcons);
        QWidget::setTabOrder(listWidgetIcons, table);
        QWidget::setTabOrder(table, tree);

        retranslateUi(QssEditor);
        QObject::connect(text, SIGNAL(textChanged()), QssEditor, SLOT(slotCssChanged()));
        QObject::connect(toolOpen, SIGNAL(clicked()), QssEditor, SLOT(slotOpen()));
        QObject::connect(toolSave, SIGNAL(clicked()), QssEditor, SLOT(slotSave()));
        QObject::connect(toolSaveAs, SIGNAL(clicked()), QssEditor, SLOT(slotSaveAs()));
        QObject::connect(toolOptions, SIGNAL(clicked()), QssEditor, SLOT(slotOptions()));
        QObject::connect(toolUndo, SIGNAL(clicked()), text, SLOT(undo()));
        QObject::connect(toolRedo, SIGNAL(clicked()), text, SLOT(redo()));
        QObject::connect(toolClose, SIGNAL(clicked()), QssEditor, SLOT(slotClose()));
        QObject::connect(toolAbout, SIGNAL(clicked()), QssEditor, SLOT(slotAbout()));
        QObject::connect(toolAboutQt, SIGNAL(clicked()), QssEditor, SLOT(slotAboutQt()));

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(3);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QssEditor);
    } // setupUi

    void retranslateUi(QWidget *QssEditor)
    {
#ifndef QT_NO_TOOLTIP
        toolOpen->setToolTip(QApplication::translate("QssEditor", "Open style", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolSave->setToolTip(QApplication::translate("QssEditor", "Save style", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolSaveAs->setToolTip(QApplication::translate("QssEditor", "Save style as", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolClose->setToolTip(QApplication::translate("QssEditor", "Close", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolUndo->setToolTip(QApplication::translate("QssEditor", "Undo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolRedo->setToolTip(QApplication::translate("QssEditor", "Redo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolOptions->setToolTip(QApplication::translate("QssEditor", "Options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        disablebBtn->setText(QApplication::translate("QssEditor", "disable", 0, QApplication::UnicodeUTF8));
        enableBtn->setText(QApplication::translate("QssEditor", "enable", 0, QApplication::UnicodeUTF8));
        labelPreview->setText(QApplication::translate("QssEditor", "Preview style", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QssEditor", "spinbox:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QssEditor", "time edit:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QssEditor", "Line:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QssEditor", "GroupBox", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("QssEditor", "RadioButton", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("QssEditor", "RadioButton", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("QssEditor", "RadioButton", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QssEditor", "QScroArea", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("QssEditor", "QPushButton\n"
"larger", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidgetIcons->isSortingEnabled();
        listWidgetIcons->setSortingEnabled(false);
        listWidgetIcons->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("QssEditor", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("QssEditor", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("QssEditor", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("QssEditor", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("QssEditor", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = table->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = table->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = table->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = table->isSortingEnabled();
        table->setSortingEnabled(false);
        table->setSortingEnabled(__sortingEnabled2);

        QTreeWidgetItem *___qtreewidgetitem = tree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled3 = tree->isSortingEnabled();
        tree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tree->topLevelItem(1);
        ___qtreewidgetitem1->setText(2, QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = tree->topLevelItem(3);
        ___qtreewidgetitem2->setText(0, QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = tree->topLevelItem(4);
        ___qtreewidgetitem3->setText(0, QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = tree->topLevelItem(5);
        ___qtreewidgetitem4->setText(0, QApplication::translate("QssEditor", "R", 0, QApplication::UnicodeUTF8));
        tree->setSortingEnabled(__sortingEnabled3);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QssEditor", "TextEdit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QApplication::translate("QssEditor", "<html><head/><body><p>QToolBox</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("QssEditor", "\351\241\265", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("QssEditor", "\351\241\265", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QssEditor", "QStackedWidget\n"
"page1", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QssEditor", "page2", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QssEditor", "page", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QssEditor);
    } // retranslateUi

};

namespace Ui {
    class QssEditor: public Ui_QssEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSSEDITOR_H
