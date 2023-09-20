#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H

#include <iostream>

using namespace std;

class InstrumentoMusical
{
public:
    virtual void tocar() = 0;
    virtual void afinar() = 0;

};
#endif