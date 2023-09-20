#ifndef MIEXCEPCION_H
#define MIEXCEPCION_H
#include <iostream>
#include <string>
using std::string;

class MiExcepcion{
    private:
        string mensaje;
    public:
        MiExcepcion();
        MiExcepcion(string _mensaje);
        void display();
};

#endif