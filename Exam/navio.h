#ifndef NAVIO_H
#define NAVIO_H

#include <iostream>
#include <string>

using namespace std;

class Navio
{
    protected:
        string idNavio;
        string nombre;
        double poderFuego;

    public:
        Navio();
        Navio(string nom, string id, double poder);
        virtual double getPoderFuego() = 0;
        virtual void display() = 0;
        bool operator<(Navio &otro);
};

#endif