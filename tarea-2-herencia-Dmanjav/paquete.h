#ifndef PAQUETE_H
#define PAQUETE_H
#include <iostream>
#include <string>
#include "envio.h"

class Paquete : public Envio
{
private:
    double profu;
    double pesokg;
    double cost0;
public:
    Paquete();
    Paquete(string nombre, string direccion, string ciudad, string estado, int codPostrem, int codPostdest, double costEnvio, double largo, double ancho, double prof, double peso, double costo);


    double getP();
    void setP(double pro);
    double getP2();
    void setP2(double pes);
    double getC();
    void setC(double cost);
    double calculaCosto();
};
#endif