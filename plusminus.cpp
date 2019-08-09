#include "plusminus.h"
#include <QGridLayout>

PlusMinus::PlusMinus(QWidget *parent)
    : QWidget(parent) {
        
  QPushButton *plsBtn = new QPushButton("+", this);
  QPushButton *minBtn = new QPushButton("-", this);
  QPushButton *five = new QPushButton("5", this);
  QPushButton *four = new QPushButton("4", this);
  lbl = new QLabel("0", this);
  
  QGridLayout *grid = new QGridLayout(this);
  grid->addWidget(plsBtn, 0, 0);
  grid->addWidget(minBtn, 0, 1);
  grid->addWidget(lbl, 1, 1);
  grid->addWidget(five,2,2);
  grid->addWidget(four,1,2);

  setLayout(grid);  

  connect(plsBtn, &QPushButton::clicked, this, &PlusMinus::OnPlus);
  connect(minBtn, &QPushButton::clicked, this, &PlusMinus::OnMinus);
  connect(four,&QPushButton::clicked,this, &PlusMinus::OnFour);
}

void PlusMinus::OnPlus() {
    
  int val = lbl->text().toInt();
  val++;
  lbl->setText(QString::number(val));
}

void PlusMinus::OnMinus() {
    
  int val = lbl->text().toInt();
  val--;
  lbl->setText(QString::number(val));
}
void PlusMinus::OnFour() {
  lbl->setText(QString::number(4));
}
