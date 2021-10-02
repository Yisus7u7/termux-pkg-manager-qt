#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QProcess;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SearchButton_clicked();

    void on_InfoButton_clicked();

    void on_UninstallButton_clicked();

    void on_InstallButton_clicked();

    void on_actionclear_output_triggered();

    void on_actionUpdate_packages_triggered();

    void on_actionupgrade_pkgs_triggered();

    void on_actionpkgs_list_triggered();

    void on_actionPkgs_list_installed_triggered();

    void on_actionClean_pkgs_cache_triggered();

    void on_actionAutoremove_pkgs_cache_triggered();

    void on_actionQuit_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionAbout_app_triggered();

private:
    Ui::MainWindow *ui;
    QProcess *mProcess;
};
#endif // MAINWINDOW_H
