#include <math.h>
#include "figura.h"
void Figura::move(float Alpha, QPainter *Painter)   // вычислить новое значение и нарисовать фигуру
{
    dx=halflen*cos(Alpha);
    dy=halflen*sin(Alpha);
    draw(Painter);
}
void MyLine::draw(QPainter *Painter)    // рисовать (для линии)
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy);
}
void MyRect::draw(QPainter *Painter)    // рисовать (для квадрата)
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy);
}
