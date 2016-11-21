#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menuWidget = new MenuWidget();
    gameWidget = new GameWidget();

    ui->stackedWidget->addWidget(menuWidget);
    ui->stackedWidget->addWidget(gameWidget);

    connect(ui->pushButtonStartGame,SIGNAL(clicked()),this,SLOT(onClickShowGameWidget()));
    connect(ui->pushButtonMenu,SIGNAL(clicked()),this,SLOT(onClickShowMenuWidget()));
    connect(ui->pushButtonExit,SIGNAL(clicked()),this,SLOT(onClickExit()));


}

MainWindow::~MainWindow()
{
    delete ui;
    delete menuWidget;
    delete gameWidget;
}

void MainWindow::onClickShowGameWidget(){
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::onClickShowMenuWidget(){
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::onClickExit(){
    qApp->exit();
}
