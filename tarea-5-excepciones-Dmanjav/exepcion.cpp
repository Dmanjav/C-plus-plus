#include "excepcion.h"
#include "fraccion.h"

#include <iostream>
#include <string>

using namespace std;

Excepcion::Excepcion(){}

Excepcion::Excepcion(string mens)
{
    mensaje = mens;
}

void Excepcion::display()
{
    cout << "ERROR: El denominador debe de ser mayor a 0, no menor." << "\n";
}