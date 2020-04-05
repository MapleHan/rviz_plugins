/********************************************************************************
** Form generated from reading UI file 'qrviz.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRVIZ_H
#define UI_QRVIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRviz
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *QRviz)
    {
        if (QRviz->objectName().isEmpty())
            QRviz->setObjectName(QStringLiteral("QRviz"));
        QRviz->resize(754, 590);
        verticalLayout_2 = new QVBoxLayout(QRviz);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QRviz);

        QMetaObject::connectSlotsByName(QRviz);
    } // setupUi

    void retranslateUi(QWidget *QRviz)
    {
        QRviz->setWindowTitle(QApplication::translate("QRviz", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QRviz: public Ui_QRviz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRVIZ_H
