#ifndef FLOTA_H
#define FLOTA_H

#include <iostream>
#include <vector>

#include "navio.h"
#include "oficial.h"

using namespace std;

class Flota 
{
    private:
        int idFlota;
        Oficial oficial;
        vector <Navio *> barcos;

    public:
        Flota();
        Flota(int id, Oficial of);
        double getTotalPOderFUego();
        void AgregarNavio(Navio* bar);
        void display();
};

#endif