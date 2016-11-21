#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QSize>


#define DIM 3

namespace Ui {
class GameWidget;
}

class GameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GameWidget(QWidget *parent = 0);
    ~GameWidget();

private:
    Ui::GameWidget *ui;
    QGridLayout *gridLayout;
    QPushButton *** buttons;

private slots:
    void onClickGridButton();

};

#endif // GAMEWIDGET_H
