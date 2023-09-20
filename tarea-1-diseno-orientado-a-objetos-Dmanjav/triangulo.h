#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "point.h"
#include "triangulo.h"

#include <vector>

using namespace std;

class Triangulo
{
    public:
    vector <Point> vertices{};
    void agregarVertice(Point p);
    double calculaPerimetro();
};
#endif