#ifndef BIRD_H
#define BIRD_H
#include<QMainWindow>
#include<QObject>
#include<QGraphicsRectItem>
#include<QPainter>
#include <QGraphicsEllipseItem>
#include<QKeyEvent>
#include<QTimer>
#include<QDebug>
#include<QMessageBox>
#include<QElapsedTimer>
class bird:public QObject,public QGraphicsEllipseItem
{
    Q_OBJECT

    static int pos_x;
    static int pos_y;

public:
    int shomarande=0;
    bird();
    ~bird();
    void start();
    static int get_x();
    static int get_y();
    static void set_x(int pos);
    static void set_y(int pos);
    QRectF boundingRect();
static int bestscore;
int score=0;

QPainter *painter;
QPen *pen;
QPolygon *poly;

QElapsedTimer *time;
QTimer * timer,*timerpaint;

    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

public slots:
    void up ();
    void rotate();
    void keyPressEvent(QKeyEvent *event);

signals:
void end();

};
#endif // BIRD_H
