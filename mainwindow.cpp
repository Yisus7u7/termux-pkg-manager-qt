#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mProcess = new QProcess(this);

    connect(mProcess, &QProcess::readyReadStandardOutput, [&]()
    {
        auto data = mProcess->readAllStandardOutput();
        ui->plainTextEdit->appendPlainText(data);
    });

    connect(mProcess, &QProcess::readyReadStandardError, [&]()
    {
        auto data = mProcess->readAllStandardError();
        ui->plainTextEdit->appendPlainText(data);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SearchButton_clicked()
{
    ui->plainTextEdit->clear();
    mProcess->waitForFinished(1);
    mProcess->start("apt search " + ui->lineEdit->text());
}

void MainWindow::on_InfoButton_clicked()
{
    ui->plainTextEdit->clear();
    mProcess->waitForFinished(1);
    mProcess->start("apt show " + ui->lineEdit->text());
}

void MainWindow::on_UninstallButton_clicked()
{
    ui->plainTextEdit->clear();
    QString package = ui->lineEdit->text();
    mProcess->waitForFinished(1);
    mProcess->start("apt purge -y " + package);
    //QMessageBox::information(nullptr, "Status", "Done.");
}



void MainWindow::on_InstallButton_clicked()
{
    ui->plainTextEdit->clear();
    QString package = ui->lineEdit->text();
    mProcess->waitForFinished(1);
    mProcess->start("apt install -y " + package);
    //QMessageBox::information(nullptr, "Status", "Done.");
}

void MainWindow::on_actionclear_output_triggered()
{
    ui->plainTextEdit->clear();
}

void MainWindow::on_actionUpdate_packages_triggered()
{
    mProcess->waitForFinished(1);
    mProcess->start("apt update");
}

void MainWindow::on_actionupgrade_pkgs_triggered()
{
    mProcess->waitForFinished(1);
    mProcess->start("apt upgrade -y");
}

void MainWindow::on_actionpkgs_list_triggered()
{
    mProcess->waitForFinished(1);
    mProcess->start("apt list");
}

void MainWindow::on_actionPkgs_list_installed_triggered()
{
    mProcess->waitForFinished(1);
    mProcess->start("apt list --installed");
}

void MainWindow::on_actionClean_pkgs_cache_triggered()
{
    mProcess->waitForFinished(1);
    mProcess->start("apt autoclean");
}

void MainWindow::on_actionAutoremove_pkgs_cache_triggered()
{
    mProcess->waitForFinished(1);
    mProcess->start("apt autoremove -y");
}

void MainWindow::on_actionQuit_triggered()
{
    close();
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this, "Qt");
}

void MainWindow::on_actionAbout_app_triggered()
{
    QString txt;
    txt = "Termux pkg manager is a graphical interface for\n";
    txt+= "pkg/apt written in C ++ and Qt";
    QMessageBox::about(this, "About termux-pkg-manager", txt);
}
