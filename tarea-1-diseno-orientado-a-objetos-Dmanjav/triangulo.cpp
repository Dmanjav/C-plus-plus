#include <iostream>
#include "triangulo.h"
#include "point.h"

#include <vector>

using namespace std;

void Triangulo::agregarVertice(Point p)
{
  vertices.push_back(p);
}
double Triangulo::calculaPerimetro()
{
    double result = vertices[0].distance(vertices[1])+ vertices[1].distance(vertices[2])+ vertices[2].distance(vertices[0]);
    return result;
};