#include "atm.h"
#include "ui_atm.h"
#include "dialog.h"
atm::atm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::atm)
{
    ui->setupUi(this);
    transactionArr= new QString[10];
    transactionBalance=0;
    transactionCount=0;
}
atm::~atm()
{
    delete ui;
}


void atm::on_pushButton_Clear_clicked()
{
     ui->lineEditX->setText("");
}


void atm::on_pushButtonDeposit_clicked()
{
  // transactionBalance+= ui->lineEditX->text().toInt();
  ui -> label1 -> setText(QString::number(ui->lineEditX->text().toInt() + ui->label1->text().toInt()));
  transactionArr[transactionCount] = "deposited " + ui->lineEditX ->text();
  transactionCount++;
}
void atm::on_pushButtonWithdraw_clicked()
{
    ui -> label1 -> setText(QString::number(ui->label1->text().toInt() - ui->lineEditX->text().toInt()));
    transactionArr[transactionCount] = "Withdrawn " + ui->lineEditX ->text();
    transactionCount++;
}
void atm::on_pushButtonView_clicked()
{
    Dialog dialog (transactionArr,transactionCount);
    dialog.setModal(true);
    dialog.exec();
}
