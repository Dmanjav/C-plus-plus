#include "navio.h"

#include <iostream>
#include <string>

using namespace std;

Navio::Navio(){};

Navio::Navio(string nom, string id, double poder)
{
    nombre = nom;
    idNavio = id;
    poderFuego = poder;
};

bool Navio::operator < (Navio &otro)
{
    double fuegoAlpha;
    double fuegoBeta;

    fuegoAlpha = otro.getPoderFuego();
    fuegoBeta = getPoderFuego();

    bool resultado = 0;
    if (fuegoBeta < fuegoAlpha)
    {
        resultado = 1;
    }
    return resultado;
}