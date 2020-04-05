/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QToolBox *toolBox;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_16;
    QLineEdit *lineEdit_4;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdit_7;
    QLabel *label_20;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_17;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QWidget *page_3;
    QLabel *label_23;
    QTextEdit *base_cmd_text;
    QLabel *label_24;
    QTextEdit *laer_cmd_text;
    QLabel *label_25;
    QTextEdit *shutdown_cmd_text;
    QWidget *page_4;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(588, 744);
        toolBox = new QToolBox(Settings);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 10, 561, 711));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 561, 600));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 361, 155));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_5->addWidget(label_15);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_6->addWidget(label_16);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_6->addWidget(label_22);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_11->addWidget(label_12);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_11->addWidget(lineEdit_7);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_11->addWidget(label_20);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_11->addWidget(lineEdit_9);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_11->addWidget(label_21);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_7->addWidget(label_17);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_7->addWidget(lineEdit_5);


        verticalLayout_5->addLayout(horizontalLayout_7);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 220, 113, 25));
        comboBox = new QComboBox(page);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(50, 270, 86, 25));
        comboBox->setEditable(true);
        spinBox = new QSpinBox(page);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(60, 320, 48, 26));
        checkBox = new QCheckBox(page);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(250, 310, 92, 23));
        toolBox->addItem(page, QString::fromUtf8("\350\257\235\351\242\230\350\256\276\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 561, 600));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 10, 111, 17));
        base_cmd_text = new QTextEdit(page_3);
        base_cmd_text->setObjectName(QStringLiteral("base_cmd_text"));
        base_cmd_text->setGeometry(QRect(20, 30, 321, 51));
        label_24 = new QLabel(page_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 90, 141, 17));
        laer_cmd_text = new QTextEdit(page_3);
        laer_cmd_text->setObjectName(QStringLiteral("laer_cmd_text"));
        laer_cmd_text->setGeometry(QRect(20, 110, 321, 51));
        label_25 = new QLabel(page_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 170, 141, 17));
        shutdown_cmd_text = new QTextEdit(page_3);
        shutdown_cmd_text->setObjectName(QStringLiteral("shutdown_cmd_text"));
        shutdown_cmd_text->setGeometry(QRect(20, 190, 321, 51));
        toolBox->addItem(page_3, QString::fromUtf8("\345\277\253\346\215\267\346\214\207\344\273\244\350\256\276\347\275\256"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 561, 600));
        toolBox->addItem(page_4, QString::fromUtf8("\347\273\210\347\253\257\350\256\276\347\275\256"));

        retranslateUi(Settings);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", Q_NULLPTR));
        label_15->setText(QApplication::translate("Settings", "\351\207\214\347\250\213\350\256\241\350\257\235\351\242\230\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("Settings", "raw_odom", Q_NULLPTR));
        label_16->setText(QApplication::translate("Settings", "\347\224\265\346\261\240\347\224\265\351\207\217\350\257\235\351\242\230\357\274\232", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("Settings", "power", Q_NULLPTR));
        label_22->setText(QApplication::translate("Settings", "std_msg/Float32", Q_NULLPTR));
        label_12->setText(QApplication::translate("Settings", "\346\234\200\344\275\216\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("Settings", "10", Q_NULLPTR));
        label_20->setText(QApplication::translate("Settings", "V", Q_NULLPTR));
        label_13->setText(QApplication::translate("Settings", "\346\234\200\351\253\230\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        lineEdit_9->setText(QApplication::translate("Settings", "11.8", Q_NULLPTR));
        label_21->setText(QApplication::translate("Settings", "V", Q_NULLPTR));
        label_17->setText(QApplication::translate("Settings", "\350\247\206\351\242\221\346\265\201\350\257\235\351\242\230\357\274\232", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Settings", "CheckBox", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Settings", "\350\257\235\351\242\230\350\256\276\347\275\256", Q_NULLPTR));
        label_23->setText(QApplication::translate("Settings", "\345\274\200\345\220\257\345\272\225\347\233\230\345\221\275\344\273\244\357\274\232", Q_NULLPTR));
        base_cmd_text->setHtml(QApplication::translate("Settings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ssh chengyangkj@chengyangkj-4wd-master</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">roslaunch linorobot bringup.launch</p></body></html>", Q_NULLPTR));
        label_24->setText(QApplication::translate("Settings", "\345\274\200\345\220\257\346\277\200\345\205\211\351\233\267\350\276\276\345\221\275\344\273\244\357\274\232", Q_NULLPTR));
        laer_cmd_text->setHtml(QApplication::translate("Settings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ssh chengyangkj@chengyangkj-4wd-master</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">roslaunch linorobot laser.launch</p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("Settings", "\345\205\263\351\227\255\350\277\234\347\250\213\344\270\273\346\234\272\345\221\275\344\273\244\357\274\232", Q_NULLPTR));
        shutdown_cmd_text->setHtml(QApplication::translate("Settings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ssh chengyangkj@chengyangkj-4wd-master</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">shutdown -h now </p></body></html>", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Settings", "\345\277\253\346\215\267\346\214\207\344\273\244\350\256\276\347\275\256", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("Settings", "\347\273\210\347\253\257\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
