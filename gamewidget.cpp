#include "gamewidget.h"
#include "ui_gamewidget.h"

GameWidget::GameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameWidget)
{
    ui->setupUi(this);

    /* GridLayout for Buttons */
    gridLayout = new QGridLayout(ui->boardWidget);

    /* Creation of buttons */
    buttons = new QPushButton ** [DIM];
    for(int i=0;i<DIM;i++){
        buttons[i] = new QPushButton * [DIM];
        for(int j=0;j<DIM;j++){
            /*Creatig Buttons */
            buttons[i][j] = new QPushButton();
            /* Expanding buttons in the layout  */
            //buttons[i][j]->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
            /* Adding a button into the layout in the position i,j*/
            gridLayout->addWidget(buttons[i][j],i,j);
        }
    }
}

GameWidget::~GameWidget()
{
    delete ui;

    /* Deleting the GridLayout */
    delete gridLayout;

    /* Deleting each button pointer */
    for(int i=0;i<DIM;i++){
        for(int j=0;j<DIM;j++){
           delete buttons[i][j];

        }
    }

    /* Deleting cols of each row */
    for(int i=0;i<DIM;i++){
        delete [] buttons[i];
    }


    /* Deleting the row matrix */
    delete [] buttons;


}

void GameWidget::onClickGridButton(){

}
