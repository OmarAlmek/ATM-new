#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QString *ar, int c, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    for (int i=0; i <c; i++){
       ui->textEdit->append(ar[i]);
      ui->textEdit->setReadOnly("true");
    }
}

Dialog::~Dialog()
{
  delete ui;
}

