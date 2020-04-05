/********************************************************************************
** Form generated from reading UI file 'qrviz_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRVIZ_WIDGET_H
#define UI_QRVIZ_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRviz_widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *QRviz_widget)
    {
        if (QRviz_widget->objectName().isEmpty())
            QRviz_widget->setObjectName(QStringLiteral("QRviz_widget"));
        QRviz_widget->resize(1201, 709);
        verticalLayout_2 = new QVBoxLayout(QRviz_widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QRviz_widget);

        QMetaObject::connectSlotsByName(QRviz_widget);
    } // setupUi

    void retranslateUi(QWidget *QRviz_widget)
    {
        QRviz_widget->setWindowTitle(QApplication::translate("QRviz_widget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QRviz_widget: public Ui_QRviz_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRVIZ_WIDGET_H
