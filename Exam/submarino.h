#ifndef SUBMARINO_H
#define SUBMARINO_H

#include <iostream>
#include <string>

#include "navio.h"

using namespace std;

class Submarino: public Navio
{
    public:
        Submarino();
        Submarino(string nom, string id, double poder, double profundidad);
        double getPoderFuego();
        void display();

    private:
        double profundidad;
};

#endif