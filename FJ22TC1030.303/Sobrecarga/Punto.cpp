#include "Punto.h"
#include <iostream>


using std::cout;
using std::endl;


Punto::Punto()
{
    x= 0;
    y= 0;
}

Punto::Punto(int x1, int y1 )
{
    x = x1;
    y = y1;
}

Punto Punto::operator +(Punto &p)
{
    int x2 = x + p.x;
    int y2 = y + p.y;
    Punto resultado(x2, y2);

    return resultado;

}

Punto Punto::operator +(Punto *p)
{
    int x2 = x + p->x;
    int y2 = y + p->y;
    Punto resultado(x2, y2);

    return resultado;

}

void Punto::display()
{
    cout<<"Punto x = " << x << " Punto y = " << y <<endl;
}