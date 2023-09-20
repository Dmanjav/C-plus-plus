#include "paquete.h"
#include "envio.h"
#include <iostream>
#include <string>

using namespace std;

Paquete::Paquete(){};
Paquete::Paquete(string nombre, string direccion, string ciudad, string estado, int codPostrem, int codPostdest, double costEnvio, double largo, double ancho, double prof, double peso, double costo) : Envio(nombre,  direccion, ciudad, estado, codPostrem, codPostdest, costEnvio, largo, ancho) 
{
    profu=prof;
    pesokg=peso;
    cost0=costo;
}


double Paquete::getP()
{
    return profu;
}

void Paquete::setP(double pro)
{
    profu=pro;
}

double Paquete::getP2()
{
    return pesokg;
}

void Paquete::setP2(double pes)
{
    pesokg=pes;
}

double Paquete::getC()
{
    return cost0;
}

void Paquete::setC(double cost)
{
    cost0=cost;
}

double Paquete::calculaCosto()
{
    if (getP2() <= 0 || getC() <= 0)
    {
        cout << "ERROR: Alguno de tus valores es negativo. " << endl;
        return 0;
    }
    else
    {
        double paqcost = getC() * getP2() + getCostoE();
        cout << "El costo por enviar el paquete es de: ";
        return paqcost;
    }
}