#include <iostream>
#include "point.h"
#include <cmath>
using namespace std;

Point::Point():x{0.00000}, y{0.00000}{};
Point::Point(double x1,double y1):x{x1},y{y1}{}

double Point::getX()
{
    return x;
}
double Point::getY()
{
    return y;
}
void Point::setX(double x1)
{
    x=x1;
}
void Point::setY(double y1)
{
    x=y1;
}

double Point::distance(Point p1)
{
    return sqrt(pow(p1.getX() - x,2) + pow(p1.getY() - y,2));
};
Point Point::suma(Point p1)
{
    Point suma(p1.getX() + x, p1.getY() + y);
    return suma;
};