/********************************************************************************
** Form generated from reading UI file 'mapp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPP_H
#define UI_MAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAPP
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_map;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_quit;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btn_forward;
    QPushButton *btn_left;
    QPushButton *btn_right;
    QPushButton *btn_back;
    QPushButton *btn_stop;

    void setupUi(QWidget *MAPP)
    {
        if (MAPP->objectName().isEmpty())
            MAPP->setObjectName(QStringLiteral("MAPP"));
        MAPP->resize(827, 611);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MAPP->sizePolicy().hasHeightForWidth());
        MAPP->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(MAPP);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 30, 701, 541));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 31, 671, 471));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_map = new QPushButton(layoutWidget);
        btn_map->setObjectName(QStringLiteral("btn_map"));
        QFont font;
        font.setPointSize(14);
        btn_map->setFont(font);

        horizontalLayout->addWidget(btn_map);

        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_quit = new QPushButton(layoutWidget);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));
        btn_quit->setFont(font);

        horizontalLayout->addWidget(btn_quit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        horizontalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_forward = new QPushButton(layoutWidget);
        btn_forward->setObjectName(QStringLiteral("btn_forward"));
        btn_forward->setFont(font);

        gridLayout->addWidget(btn_forward, 0, 1, 1, 1);

        btn_left = new QPushButton(layoutWidget);
        btn_left->setObjectName(QStringLiteral("btn_left"));
        btn_left->setFont(font);

        gridLayout->addWidget(btn_left, 1, 0, 1, 1);

        btn_right = new QPushButton(layoutWidget);
        btn_right->setObjectName(QStringLiteral("btn_right"));
        btn_right->setFont(font);

        gridLayout->addWidget(btn_right, 1, 2, 1, 1);

        btn_back = new QPushButton(layoutWidget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setFont(font);

        gridLayout->addWidget(btn_back, 2, 1, 1, 1);

        btn_stop = new QPushButton(layoutWidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setFont(font);

        gridLayout->addWidget(btn_stop, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalLayout_2->setStretch(0, 40);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 8);

        retranslateUi(MAPP);

        QMetaObject::connectSlotsByName(MAPP);
    } // setupUi

    void retranslateUi(QWidget *MAPP)
    {
        MAPP->setWindowTitle(QApplication::translate("MAPP", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MAPP", "Mapping", Q_NULLPTR));
        btn_map->setText(QApplication::translate("MAPP", "mapping", Q_NULLPTR));
        btn_quit->setText(QApplication::translate("MAPP", "quit", Q_NULLPTR));
        btn_forward->setText(QApplication::translate("MAPP", "forward", Q_NULLPTR));
        btn_left->setText(QApplication::translate("MAPP", "left", Q_NULLPTR));
        btn_right->setText(QApplication::translate("MAPP", "right", Q_NULLPTR));
        btn_back->setText(QApplication::translate("MAPP", "back", Q_NULLPTR));
        btn_stop->setText(QApplication::translate("MAPP", "stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MAPP: public Ui_MAPP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPP_H
