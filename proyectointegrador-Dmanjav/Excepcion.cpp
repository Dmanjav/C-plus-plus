#include "Excepcion.h"
#include "Catalogo.h"

#include <iostream>
#include <string>

using namespace std;

Excepcion::Excepcion() {}

Excepcion::Excepcion(string mens)
{
    mensaje = mens;
}

void Excepcion::display()
{
    cout << "ERROR: entraste una opcion incorrecta"
         << "\n";
}