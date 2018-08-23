#include "workspace.h"
#include "ui_workspace.h"

WorkSpace::WorkSpace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkSpace)
{
    ui->setupUi(this);
}

WorkSpace::~WorkSpace()
{
    delete ui;
}
