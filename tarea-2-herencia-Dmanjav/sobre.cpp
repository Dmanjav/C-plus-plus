#include "sobre.h"
#include "envio.h"
#include <iostream>

using namespace std;

Sobre::Sobre(){};
Sobre::Sobre(double cargoExtra, string nombre, string direccion, string ciudad, string estado, int codPostrem, int codPostdest, double costEnvio, double largo, double ancho) : Envio(nombre, direccion, ciudad, estado, codPostrem, codPostdest, costEnvio, largo, ancho)
{
    extra=cargoExtra;
}

double Sobre::getCargo()
{
    return extra;
}

void Sobre::setCargo(double cargo)
{
    extra = cargo;
}

double Sobre::calculaCosto()
{
    if (getL() * getA() > (25*30))
    {
        double final = (getCostoE() + getCargo());
        cout << "El precio final por sobrepasar las medidas es de: "; 
        return final;
    }
    else
    {
        double final = getCostoE();
        cout << "El precio final es de: ";
        return final;
    }
}