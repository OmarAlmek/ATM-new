#ifndef ATM_H
#define ATM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class atm; }
QT_END_NAMESPACE

class atm : public QMainWindow
{
    Q_OBJECT

public:
    atm(QWidget *parent = nullptr);
    ~atm();
    void clear();


private slots:
    void on_pushButton_Clear_clicked();

    void on_pushButtonDeposit_clicked();

    void on_pushButtonView_clicked();

    void on_pushButtonWithdraw_clicked();

private:
    Ui::atm *ui;
    QString*transactionArr;
    int transactionCount;
    double transactionBalance;
    QString Num;

};
#endif // ATM_H
