//Diego Manjarrez Viveros
//A01753486

#include "point.h"
#include "triangulo.h"
#include <iostream>

using namespace std;

int main()
{
    Triangulo triang;
    double x,y,z;

    for (int p=1; p<=3; p++)
    {
        cout << "Valor en X del Punto " << p <<" : "; cin >> x;
        cout << "Valor en Y del Punto " << p <<" : "; cin >> y;

        Point Point(x,y);
        triang.agregarVertice(Point);
    }
    z=triang.calculaPerimetro();
    cout << "El perimetro del Triangulo es : " << z << endl;
    return 0;
}