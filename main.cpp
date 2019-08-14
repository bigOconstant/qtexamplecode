#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <iostream>
#include "plusminus.h"
#include "simplemenu.h"
using namespace std;
class MyButton : public QWidget {
    
 public:
   MyButton(QWidget *parent = 0)
    : QWidget(parent) {
           
  QPushButton *quitBtn = new QPushButton("Quit", this);
  quitBtn->setGeometry(50, 40, 75, 30);
  std::cout <<" callin this"<<std::endl;

  connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
   };
   
};


int main(int argc, char *argv[]) {
    
  QApplication app(argc, argv);  
    
  //PlusMinus window;
  SimpleMenu window;

  window.resize(300, 190);
  window.setWindowTitle("Plus minus");
  window.show();

  return app.exec();
}
