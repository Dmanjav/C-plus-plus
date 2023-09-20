#ifndef PORTA_H
#define PORTA_H

#include <iostream>
#include <string>

#include "navio.h"

using namespace std;

class PortaAviones: public Navio
{
    public:
        PortaAviones();
        PortaAviones(string nom, string id, double poder, double litros);
        double getPoderFuego();
        void display();
        
    private:
        double litros;
};

#endif