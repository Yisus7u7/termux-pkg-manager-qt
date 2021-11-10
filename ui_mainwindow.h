/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionclear_output;
    QAction *actionUpdate_packages;
    QAction *actionupgrade_pkgs;
    QAction *actionpkgs_list;
    QAction *actionPkgs_list_installed;
    QAction *actionClean_pkgs_cache;
    QAction *actionAutoremove_pkgs_cache;
    QAction *actionQuit;
    QAction *actionAbout_Qt;
    QAction *actionAbout_app;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *InfoButton;
    QPushButton *SearchButton;
    QPushButton *InstallButton;
    QPlainTextEdit *plainTextEdit;
    QPushButton *UninstallButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(597, 404);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("emblem-downloads");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        actionclear_output = new QAction(MainWindow);
        actionclear_output->setObjectName(QString::fromUtf8("actionclear_output"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("edit-clear");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionclear_output->setIcon(icon1);
        actionUpdate_packages = new QAction(MainWindow);
        actionUpdate_packages->setObjectName(QString::fromUtf8("actionUpdate_packages"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("go-up")));
        actionUpdate_packages->setIcon(icon2);
        actionupgrade_pkgs = new QAction(MainWindow);
        actionupgrade_pkgs->setObjectName(QString::fromUtf8("actionupgrade_pkgs"));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("software-update-available")));
        actionupgrade_pkgs->setIcon(icon3);
        actionpkgs_list = new QAction(MainWindow);
        actionpkgs_list->setObjectName(QString::fromUtf8("actionpkgs_list"));
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("view-list")));
        actionpkgs_list->setIcon(icon4);
        actionPkgs_list_installed = new QAction(MainWindow);
        actionPkgs_list_installed->setObjectName(QString::fromUtf8("actionPkgs_list_installed"));
        actionPkgs_list_installed->setIcon(icon4);
        actionClean_pkgs_cache = new QAction(MainWindow);
        actionClean_pkgs_cache->setObjectName(QString::fromUtf8("actionClean_pkgs_cache"));
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8("edit-clear")));
        actionClean_pkgs_cache->setIcon(icon5);
        actionAutoremove_pkgs_cache = new QAction(MainWindow);
        actionAutoremove_pkgs_cache->setObjectName(QString::fromUtf8("actionAutoremove_pkgs_cache"));
        QIcon icon6(QIcon::fromTheme(QString::fromUtf8("edit-clear-all")));
        actionAutoremove_pkgs_cache->setIcon(icon6);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionQuit->setIcon(icon7);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        QIcon icon8(QIcon::fromTheme(QString::fromUtf8("qt")));
        actionAbout_Qt->setIcon(icon8);
        actionAbout_app = new QAction(MainWindow);
        actionAbout_app->setObjectName(QString::fromUtf8("actionAbout_app"));
        QIcon icon9(QIcon::fromTheme(QString::fromUtf8("emblem-downloads")));
        actionAbout_app->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        InfoButton = new QPushButton(centralwidget);
        InfoButton->setObjectName(QString::fromUtf8("InfoButton"));
        QIcon icon10(QIcon::fromTheme(QString::fromUtf8("dialog-information")));
        InfoButton->setIcon(icon10);

        gridLayout->addWidget(InfoButton, 0, 4, 1, 1);

        SearchButton = new QPushButton(centralwidget);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        QIcon icon11(QIcon::fromTheme(QString::fromUtf8("system-search")));
        SearchButton->setIcon(icon11);

        gridLayout->addWidget(SearchButton, 0, 5, 1, 1);

        InstallButton = new QPushButton(centralwidget);
        InstallButton->setObjectName(QString::fromUtf8("InstallButton"));
        QIcon icon12(QIcon::fromTheme(QString::fromUtf8("system-software-install")));
        InstallButton->setIcon(icon12);

        gridLayout->addWidget(InstallButton, 0, 2, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        plainTextEdit->setFont(font);
        plainTextEdit->setReadOnly(true);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 6);

        UninstallButton = new QPushButton(centralwidget);
        UninstallButton->setObjectName(QString::fromUtf8("UninstallButton"));
        QIcon icon13(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
        UninstallButton->setIcon(icon13);

        gridLayout->addWidget(UninstallButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 597, 26));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuOptions->addAction(actionclear_output);
        menuOptions->addSeparator();
        menuOptions->addAction(actionUpdate_packages);
        menuOptions->addAction(actionupgrade_pkgs);
        menuOptions->addAction(actionpkgs_list);
        menuOptions->addAction(actionPkgs_list_installed);
        menuOptions->addSeparator();
        menuOptions->addAction(actionClean_pkgs_cache);
        menuOptions->addAction(actionAutoremove_pkgs_cache);
        menuOptions->addSeparator();
        menuOptions->addAction(actionQuit);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAbout_Qt);
        menuAbout->addAction(actionAbout_app);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "termux-pkg-manager", nullptr));
        actionclear_output->setText(QApplication::translate("MainWindow", "Clear output", nullptr));
#ifndef QT_NO_SHORTCUT
        actionclear_output->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionUpdate_packages->setText(QApplication::translate("MainWindow", "Update pkgs", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUpdate_packages->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        actionupgrade_pkgs->setText(QApplication::translate("MainWindow", "Upgrade pkgs", nullptr));
#ifndef QT_NO_SHORTCUT
        actionupgrade_pkgs->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        actionpkgs_list->setText(QApplication::translate("MainWindow", "Pkgs list", nullptr));
#ifndef QT_NO_SHORTCUT
        actionpkgs_list->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionPkgs_list_installed->setText(QApplication::translate("MainWindow", "Pkgs list-installed", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPkgs_list_installed->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionClean_pkgs_cache->setText(QApplication::translate("MainWindow", "Clean pkgs cache", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClean_pkgs_cache->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionAutoremove_pkgs_cache->setText(QApplication::translate("MainWindow", "Autoremove pkgs unused", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAbout_Qt->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+H", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout_app->setText(QApplication::translate("MainWindow", "About app", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAbout_app->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        InfoButton->setText(QApplication::translate("MainWindow", " info", nullptr));
        SearchButton->setText(QApplication::translate("MainWindow", " search", nullptr));
        InstallButton->setText(QApplication::translate("MainWindow", " install", nullptr));
        UninstallButton->setText(QApplication::translate("MainWindow", " uninstall", nullptr));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
