#ifndef SOBRE_H
#define SOBRE_H
#include "envio.h"
#include "paquete.h"
#include <iostream>

using namespace std;

class Sobre : public Envio
{

    private:
        double extra;

    public:
        Sobre();
        Sobre(double cargoExtra, string nombre, string direccion, string ciudad, string estado, int codPostrem, int codPostdest, double costEnvio, double largo, double ancho);

        double getCargo();
        void setCargo(double cargo);

        double calculaCosto();
};

#endif