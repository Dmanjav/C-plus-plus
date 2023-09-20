#include "envio.h"
#include <iostream>
#include <string>

using namespace std;

Envio::Envio(){};
Envio::Envio(string nombre, string direccion, string ciudad, string estado, int codPostrem, int codPostdest, double costEnvio, double largo, double ancho)
{
nom=nombre;
dir=direccion;
city=ciudad;
estate=estado;
pRem=codPostrem;
pDest=codPostdest;
cEnv=costEnvio;
larg=largo;
anchoo=ancho;
}

string Envio::getNomb()
{
    return nom;
}

void Envio::setNomb(string nomb)
{
    nom=nomb;
}

string Envio::getDir()
{
    return dir;
}

void Envio::setDir(string direc)
{
    dir=direc;
}

string Envio::getCiud()
{
    return city;
}

void Envio::setCiud(string ciud)
{
    city=ciud;
}

int Envio::getRem()
{
    return pRem;
}

void Envio::setRem(int rem)
{
    pRem=rem;
}

int Envio::getDest()
{
    return pDest;
}

void Envio::setDest(int dest)
{
    pDest=dest;
}

double Envio::getCostoE()
{
    return cEnv;
}

void Envio::setCostoE(double costoE)
{
    cEnv=costoE;
}

double Envio::getL()
{
    return larg;
}

void Envio::setL(double lar)
{
    larg=lar;
}

double Envio::getA()
{
    return anchoo;
}

void Envio::setA(double anch)
{
    anchoo=anch;
}

double Envio::calculaCosto()
{
    cout << "El costo de envio es de " << getCostoE()<< endl;
}

