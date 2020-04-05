/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *action_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_statue_text;
    QLabel *label_robot_staue_img;
    QSpacerItem *horizontalSpacer;
    QLabel *label_10;
    QLabel *label_6;
    QProgressBar *progressBar;
    QLabel *label_11;
    QLabel *label_power;
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_speed_x;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_dir_x;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_speed_y;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_dir_y;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QListView *view_logging;
    QLabel *label_video;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_build_map;
    QWidget *widget_rviz;
    QWidget *tab_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_edit_topic;
    QCheckBox *checkbox_use_environment;
    QLineEdit *line_edit_host;
    QCheckBox *checkbox_remember_settings;
    QLabel *label;
    QPushButton *button_connect;
    QPushButton *pushButton;
    QLineEdit *line_edit_master;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_6;
    QLabel *label_raw;
    QPushButton *pushButton_o;
    QCheckBox *checkBox_use_all;
    QPushButton *pushButton_back;
    QSlider *horizontalSlider_raw;
    QLabel *label_14;
    QPushButton *pushButton_i;
    QPushButton *pushButton_l;
    QPushButton *pushButton_j;
    QPushButton *pushButton_u;
    QPushButton *pushButton_m;
    QPushButton *pushButton_backr;
    QLabel *label_9;
    QSlider *horizontalSlider_linear;
    QLabel *label_linear;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QTreeWidget *treeWidget_rviz;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_add_topic;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tab_4;
    QPushButton *basecontrol_btn;
    QPushButton *laser_btn;
    QPushButton *remote_close_btn;
    QTextEdit *cmd_output;
    QPushButton *basecontrol_btn_2;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_22;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_19;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_20;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_21;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(1674, 1219);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        action_2 = new QAction(MainWindowDesign);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(32, 32));
        label_19->setMaximumSize(QSize(32, 32));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/images/robot2.png")));

        horizontalLayout_3->addWidget(label_19);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_3->addWidget(label_18);

        label_statue_text = new QLabel(centralwidget);
        label_statue_text->setObjectName(QStringLiteral("label_statue_text"));
        label_statue_text->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(label_statue_text);

        label_robot_staue_img = new QLabel(centralwidget);
        label_robot_staue_img->setObjectName(QStringLiteral("label_robot_staue_img"));
        label_robot_staue_img->setMinimumSize(QSize(32, 32));
        label_robot_staue_img->setMaximumSize(QSize(32, 32));
        label_robot_staue_img->setPixmap(QPixmap(QString::fromUtf8(":/images/offline.png")));

        horizontalLayout_3->addWidget(label_robot_staue_img);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_3->addWidget(label_10);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(30, 30));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/power.png")));

        horizontalLayout_3->addWidget(label_6);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(90, 16777215));
        progressBar->setStyleSheet(QLatin1String("\n"
"\n"
"QProgressBar {\n"
"   border: 2px solid grey;\n"
"   border-radius: 5px;\n"
"   text-align: center;\n"
"}"));
        progressBar->setValue(0);

        horizontalLayout_3->addWidget(progressBar);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(32, 32));
        label_11->setMaximumSize(QSize(32, 32));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/power-v.png")));

        horizontalLayout_3->addWidget(label_11);

        label_power = new QLabel(centralwidget);
        label_power->setObjectName(QStringLiteral("label_power"));
        label_power->setMinimumSize(QSize(50, 32));
        label_power->setMaximumSize(QSize(50, 32));

        horizontalLayout_3->addWidget(label_power);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        tab_manager->setMinimumSize(QSize(0, 0));
        tab_manager->setMaximumSize(QSize(1200, 54531));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        verticalLayout_13 = new QVBoxLayout(tab_status);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        groupBox_2 = new QGroupBox(tab_status);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(782, 791));
        verticalLayout_12 = new QVBoxLayout(groupBox_2);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_speed_x = new QWidget(groupBox_2);
        widget_speed_x->setObjectName(QStringLiteral("widget_speed_x"));
        widget_speed_x->setMinimumSize(QSize(300, 300));
        widget_speed_x->setMaximumSize(QSize(300, 300));

        verticalLayout->addWidget(widget_speed_x);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(32, 32));
        label_7->setMaximumSize(QSize(32, 32));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/speed.png")));

        horizontalLayout->addWidget(label_7);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(80, 30));

        horizontalLayout->addWidget(label_4);

        label_dir_x = new QLabel(groupBox_2);
        label_dir_x->setObjectName(QStringLiteral("label_dir_x"));
        label_dir_x->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(label_dir_x);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_speed_y = new QWidget(groupBox_2);
        widget_speed_y->setObjectName(QStringLiteral("widget_speed_y"));
        widget_speed_y->setMinimumSize(QSize(300, 300));
        widget_speed_y->setMaximumSize(QSize(300, 300));

        verticalLayout_3->addWidget(widget_speed_y);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(32, 32));
        label_8->setMaximumSize(QSize(32, 32));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/speed.png")));

        horizontalLayout_2->addWidget(label_8);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(80, 30));

        horizontalLayout_2->addWidget(label_5);

        label_dir_y = new QLabel(groupBox_2);
        label_dir_y->setObjectName(QStringLiteral("label_dir_y"));
        label_dir_y->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(label_dir_y);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        groupBox_12 = new QGroupBox(groupBox_2);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        verticalLayout_11 = new QVBoxLayout(groupBox_12);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QStringLiteral("view_logging"));
        view_logging->setMinimumSize(QSize(0, 0));
        view_logging->setMaximumSize(QSize(600, 600));

        horizontalLayout_7->addWidget(view_logging);

        label_video = new QLabel(groupBox_12);
        label_video->setObjectName(QStringLiteral("label_video"));
        label_video->setMaximumSize(QSize(600, 600));
        label_video->setStyleSheet(QStringLiteral("border: 1px solid  rgb(46, 52, 54);"));

        horizontalLayout_7->addWidget(label_video);


        verticalLayout_11->addLayout(horizontalLayout_7);


        verticalLayout_4->addWidget(groupBox_12);


        verticalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_13->addWidget(groupBox_2);

        tab_manager->addTab(tab_status, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayoutWidget = new QWidget(tab_3);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1201, 1081));
        verticalLayout_build_map = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_build_map->setObjectName(QStringLiteral("verticalLayout_build_map"));
        verticalLayout_build_map->setContentsMargins(0, 0, 0, 0);
        widget_rviz = new QWidget(verticalLayoutWidget);
        widget_rviz->setObjectName(QStringLiteral("widget_rviz"));

        verticalLayout_build_map->addWidget(widget_rviz);

        tab_manager->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tab_manager->addTab(tab_7, QString());

        horizontalLayout_4->addWidget(tab_manager);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(370, 100));
        tabWidget->setMaximumSize(QSize(370, 5455315));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_9 = new QVBoxLayout(tab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(100, 32));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(100, 32));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        gridLayout->addWidget(line_edit_topic, 5, 0, 1, 3);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_use_environment, 6, 0, 1, 3);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 3);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_remember_settings, 7, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 32));
        label->setMaximumSize(QSize(100, 32));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QStringLiteral("button_connect"));
        button_connect->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_connect->setIcon(icon1);

        gridLayout->addWidget(button_connect, 9, 2, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 9, 1, 1, 1);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 3);


        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_raw = new QLabel(groupBox_3);
        label_raw->setObjectName(QStringLiteral("label_raw"));

        gridLayout_6->addWidget(label_raw, 3, 2, 1, 1);

        pushButton_o = new QPushButton(groupBox_3);
        pushButton_o->setObjectName(QStringLiteral("pushButton_o"));
        pushButton_o->setStyleSheet(QStringLiteral("QPushButton#pushButton_o:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_o, 0, 2, 1, 1);

        checkBox_use_all = new QCheckBox(groupBox_3);
        checkBox_use_all->setObjectName(QStringLiteral("checkBox_use_all"));

        gridLayout_6->addWidget(checkBox_use_all, 1, 1, 1, 1);

        pushButton_back = new QPushButton(groupBox_3);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setStyleSheet(QStringLiteral("QPushButton#pushButton_back:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_back, 2, 1, 1, 1);

        horizontalSlider_raw = new QSlider(groupBox_3);
        horizontalSlider_raw->setObjectName(QStringLiteral("horizontalSlider_raw"));
        horizontalSlider_raw->setMaximum(100);
        horizontalSlider_raw->setValue(100);
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_raw, 3, 1, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_6->addWidget(label_14, 3, 0, 1, 1);

        pushButton_i = new QPushButton(groupBox_3);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));
        pushButton_i->setMouseTracking(false);
        pushButton_i->setTabletTracking(false);
        pushButton_i->setStyleSheet(QStringLiteral("QPushButton#pushButton_i:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_i, 0, 1, 1, 1);

        pushButton_l = new QPushButton(groupBox_3);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));
        pushButton_l->setStyleSheet(QStringLiteral("QPushButton#pushButton_l:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_l, 1, 2, 1, 1);

        pushButton_j = new QPushButton(groupBox_3);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));
        pushButton_j->setStyleSheet(QStringLiteral("QPushButton#pushButton_j:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_j, 1, 0, 1, 1);

        pushButton_u = new QPushButton(groupBox_3);
        pushButton_u->setObjectName(QStringLiteral("pushButton_u"));
        pushButton_u->setStyleSheet(QStringLiteral("QPushButton#pushButton_u:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_u, 0, 0, 1, 1);

        pushButton_m = new QPushButton(groupBox_3);
        pushButton_m->setObjectName(QStringLiteral("pushButton_m"));
        pushButton_m->setStyleSheet(QStringLiteral("QPushButton#pushButton_m:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_m, 2, 0, 1, 1);

        pushButton_backr = new QPushButton(groupBox_3);
        pushButton_backr->setObjectName(QStringLiteral("pushButton_backr"));
        pushButton_backr->setStyleSheet(QStringLiteral("QPushButton#pushButton_backr:pressed{background-color:rgb(239, 41, 41)}"));

        gridLayout_6->addWidget(pushButton_backr, 2, 2, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 4, 0, 1, 1);

        horizontalSlider_linear = new QSlider(groupBox_3);
        horizontalSlider_linear->setObjectName(QStringLiteral("horizontalSlider_linear"));
        horizontalSlider_linear->setMaximum(100);
        horizontalSlider_linear->setSingleStep(1);
        horizontalSlider_linear->setValue(50);
        horizontalSlider_linear->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_linear, 4, 1, 1, 1);

        label_linear = new QLabel(groupBox_3);
        label_linear->setObjectName(QStringLiteral("label_linear"));

        gridLayout_6->addWidget(label_linear, 4, 2, 1, 1);


        verticalLayout_10->addLayout(gridLayout_6);


        verticalLayout_2->addWidget(groupBox_3);


        verticalLayout_9->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_8 = new QVBoxLayout(tab_6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16, 16));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/classes/Displays.svg")));

        horizontalLayout_6->addWidget(label_12);

        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);


        verticalLayout_5->addLayout(horizontalLayout_6);

        treeWidget_rviz = new QTreeWidget(tab_6);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget_rviz->setHeaderItem(__qtreewidgetitem);
        treeWidget_rviz->setObjectName(QStringLiteral("treeWidget_rviz"));
        treeWidget_rviz->header()->setCascadingSectionResizes(true);
        treeWidget_rviz->header()->setDefaultSectionSize(80);
        treeWidget_rviz->header()->setMinimumSectionSize(160);

        verticalLayout_5->addWidget(treeWidget_rviz);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_add_topic = new QPushButton(tab_6);
        pushButton_add_topic->setObjectName(QStringLiteral("pushButton_add_topic"));

        horizontalLayout_5->addWidget(pushButton_add_topic);

        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(tab_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_5->addWidget(pushButton_5);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_8->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        basecontrol_btn = new QPushButton(tab_4);
        basecontrol_btn->setObjectName(QStringLiteral("basecontrol_btn"));
        basecontrol_btn->setGeometry(QRect(0, 10, 101, 25));
        laser_btn = new QPushButton(tab_4);
        laser_btn->setObjectName(QStringLiteral("laser_btn"));
        laser_btn->setGeometry(QRect(110, 10, 101, 25));
        remote_close_btn = new QPushButton(tab_4);
        remote_close_btn->setObjectName(QStringLiteral("remote_close_btn"));
        remote_close_btn->setGeometry(QRect(220, 10, 101, 25));
        cmd_output = new QTextEdit(tab_4);
        cmd_output->setObjectName(QStringLiteral("cmd_output"));
        cmd_output->setGeometry(QRect(0, 740, 371, 70));
        cmd_output->setStyleSheet(QLatin1String("background-color:rgb(0, 0, 0);\n"
"color:rgb(238, 238, 236);"));
        basecontrol_btn_2 = new QPushButton(tab_4);
        basecontrol_btn_2->setObjectName(QStringLiteral("basecontrol_btn_2"));
        basecontrol_btn_2->setGeometry(QRect(0, 50, 101, 25));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(1, 1, 369, 282));
        layoutWidget_3 = new QWidget(groupBox_5);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 351, 251));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_22 = new QPushButton(layoutWidget_3);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        verticalLayout_7->addWidget(pushButton_22);

        textEdit = new QTextEdit(layoutWidget_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("background-color:rgb(0, 0, 0);\n"
"color:rgb(238, 238, 236);"));

        verticalLayout_7->addWidget(textEdit);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lineEdit_6 = new QLineEdit(layoutWidget_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_10->addWidget(lineEdit_6);

        pushButton_19 = new QPushButton(layoutWidget_3);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        horizontalLayout_10->addWidget(pushButton_19);


        verticalLayout_7->addLayout(horizontalLayout_10);

        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(1, 289, 369, 361));
        layoutWidget_4 = new QWidget(groupBox_7);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 32, 351, 321));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_20 = new QPushButton(layoutWidget_4);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        horizontalLayout_9->addWidget(pushButton_20);


        verticalLayout_6->addLayout(horizontalLayout_9);

        textEdit_2 = new QTextEdit(layoutWidget_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setStyleSheet(QLatin1String("background-color:rgb(0, 0, 0);\n"
"color:rgb(238, 238, 236);"));

        verticalLayout_6->addWidget(textEdit_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEdit_8 = new QLineEdit(layoutWidget_4);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_8->addWidget(lineEdit_8);

        pushButton_21 = new QPushButton(layoutWidget_4);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        horizontalLayout_8->addWidget(pushButton_21);


        verticalLayout_6->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_4->addWidget(tabWidget);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1674, 28));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addSeparator();
        menu_File->addSeparator();
        menu_File->addSeparator();
        menu_File->addAction(action_2);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "chengyangkj\344\270\273\346\216\247\347\253\257", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&\345\212\237\350\203\275", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindowDesign", "\350\256\276\347\275\256", Q_NULLPTR));
        label_19->setText(QString());
        label_18->setText(QApplication::translate("MainWindowDesign", "\346\234\272\345\231\250\344\272\272\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_statue_text->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p><span style=\" color:#cc0000;\">\347\246\273\347\272\277</span></p></body></html>", Q_NULLPTR));
        label_robot_staue_img->setText(QString());
        label_10->setText(QApplication::translate("MainWindowDesign", "\347\224\265\346\261\240\347\224\265\351\207\217", Q_NULLPTR));
        label_6->setText(QString());
        label_11->setText(QString());
        label_power->setText(QApplication::translate("MainWindowDesign", "00.00V", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "\351\200\237\345\272\246", Q_NULLPTR));
        label_7->setText(QString());
        label_4->setText(QApplication::translate("MainWindowDesign", "X\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        label_dir_x->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        label_8->setText(QString());
        label_5->setText(QApplication::translate("MainWindowDesign", "y\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        label_dir_y->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "\346\266\210\346\201\257", Q_NULLPTR));
        label_video->setText(QApplication::translate("MainWindowDesign", "NO VIDEO", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "\345\237\272\346\234\254", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_3), QApplication::translate("MainWindowDesign", "rviz", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_7), QApplication::translate("MainWindowDesign", "\345\257\274\350\210\252", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "\344\270\273\350\212\202\347\202\271\351\205\215\347\275\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowDesign", "\346\234\254\346\234\272IP", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", Q_NULLPTR));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", Q_NULLPTR));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "\344\275\277\347\224\250\347\216\257\345\242\203\345\217\230\351\207\217", Q_NULLPTR));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", Q_NULLPTR));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "\346\211\223\345\274\200\350\275\257\344\273\266\346\227\266\350\207\252\345\212\250\350\277\236\346\216\245master", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowDesign", "\344\270\273\350\212\202\347\202\271\345\234\260\345\235\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindowDesign", "\360\237\224\227\346\226\255\345\274\200", Q_NULLPTR));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindowDesign", "\350\277\220\345\212\250\346\216\247\345\210\266", Q_NULLPTR));
        label_raw->setText(QApplication::translate("MainWindowDesign", "100", Q_NULLPTR));
        pushButton_o->setText(QApplication::translate("MainWindowDesign", "o", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_o->setShortcut(QApplication::translate("MainWindowDesign", "O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        checkBox_use_all->setText(QApplication::translate("MainWindowDesign", "\345\205\250\345\220\221\350\275\256\346\250\241\345\274\217\357\274\210k\357\274\211", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        checkBox_use_all->setShortcut(QApplication::translate("MainWindowDesign", "K", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_back->setText(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_back->setShortcut(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_14->setText(QApplication::translate("MainWindowDesign", "\350\247\222\351\200\237\345\272\246(cm/s)\357\274\232", Q_NULLPTR));
        pushButton_i->setText(QApplication::translate("MainWindowDesign", "i", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_i->setShortcut(QApplication::translate("MainWindowDesign", "I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_l->setText(QApplication::translate("MainWindowDesign", "l", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_l->setShortcut(QApplication::translate("MainWindowDesign", "L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_j->setText(QApplication::translate("MainWindowDesign", "j", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_j->setShortcut(QApplication::translate("MainWindowDesign", "J", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_u->setText(QApplication::translate("MainWindowDesign", "u", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_u->setShortcut(QApplication::translate("MainWindowDesign", "U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_m->setText(QApplication::translate("MainWindowDesign", "m", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_m->setShortcut(QApplication::translate("MainWindowDesign", "M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_backr->setText(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_backr->setShortcut(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_9->setText(QApplication::translate("MainWindowDesign", "\347\272\277\351\200\237\345\272\246(cm/s)\357\274\232", Q_NULLPTR));
        label_linear->setText(QApplication::translate("MainWindowDesign", "50", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowDesign", "\345\237\272\346\234\254\346\216\247\345\210\266", Q_NULLPTR));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("MainWindowDesign", "Displays", Q_NULLPTR));
        pushButton_add_topic->setText(QApplication::translate("MainWindowDesign", "Add", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindowDesign", "Remove", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindowDesign", "Rename", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindowDesign", "rviz", Q_NULLPTR));
        basecontrol_btn->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\220\257\345\272\225\347\233\230\346\216\247\345\210\266", Q_NULLPTR));
        laser_btn->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\220\257\346\277\200\345\205\211\351\233\267\350\276\276", Q_NULLPTR));
        remote_close_btn->setText(QApplication::translate("MainWindowDesign", "\345\205\263\351\227\255\350\277\234\347\250\213\344\270\273\346\234\272", Q_NULLPTR));
        cmd_output->setHtml(QApplication::translate("MainWindowDesign", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        basecontrol_btn_2->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindowDesign", "\345\277\253\346\215\267\346\214\207\344\273\244", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindowDesign", "\346\234\254\345\234\260\347\273\210\347\253\257", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindowDesign", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindowDesign", "\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindowDesign", "\350\277\234\347\250\213\347\273\210\347\253\257(\351\234\200\351\205\215\347\275\256\345\205\215\345\257\206\347\231\273\351\231\206.\345\271\266\345\234\250\350\256\276\347\275\256\344\270\255\350\256\276\347\275\256\350\277\236\346\216\245\345\221\275\344\273\244)", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindowDesign", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindowDesign", "\345\217\221\351\200\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowDesign", "\347\273\210\347\253\257", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
