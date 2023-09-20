#ifndef TABLERO_H
#define TABLERO_H
#include "casilla.h"
#include <iostream>


class Tablero {
    private:
        Casilla casilla[9];

    public:
        Tablero();

        bool lleno();
        bool ganado();
        void reset();
        void setCasillas(char sim, int pos);
};
#endif