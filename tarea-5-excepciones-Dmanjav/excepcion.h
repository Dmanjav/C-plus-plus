#ifndef EXCEPCION_H
#define EXCEPCION_H

#include "fraccion.h"

#include <iostream>
#include <string>

using namespace std;

class Excepcion
{
    private:
        string mensaje;

    public:
        Excepcion();
        Excepcion(string mens);
        void display();
};

#endif