#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menuwidget.h"
#include "gamewidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MenuWidget *menuWidget;
    GameWidget *gameWidget;

public slots:
    void onClickShowGameWidget();
    void onClickShowMenuWidget();
    void onClickExit();
};

#endif // MAINWINDOW_H
