#include "exitpricecalculator.h"
#include "ui_exitpricecalculator.h"

ExitPriceCalculator::ExitPriceCalculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExitPriceCalculator)
{
    ui->setupUi(this);
}

ExitPriceCalculator::~ExitPriceCalculator()
{
    delete ui;
}
