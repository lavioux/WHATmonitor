#ifndef EXITPRICECALCULATOR_H
#define EXITPRICECALCULATOR_H

#include <QDialog>

namespace Ui {
class ExitPriceCalculator;
}

class ExitPriceCalculator : public QDialog
{
    Q_OBJECT

public:
    explicit ExitPriceCalculator(QWidget *parent = 0);
    ~ExitPriceCalculator();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ExitPriceCalculator *ui;
};

#endif // EXITPRICECALCULATOR_H
