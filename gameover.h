#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QMainWindow>
#include<QPushButton>
namespace Ui {
class gameover;
}

class gameover : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameover(QWidget *parent = 0);
    ~gameover();
    void start(int score,int bestscore);
    Ui::gameover *ui;
signals:
    void emitsignalofstartingmainwindow();
    void startpage();
private slots:
    void on_again_clicked();
    void on_again_2_clicked();

};

#endif // GAMEOVER_H
