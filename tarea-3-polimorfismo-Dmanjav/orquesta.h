#ifndef ORQUESTA_H
#define ORQUESTA_H

#include "instrumento.h"

#include <vector>
#include <iostream>

using namespace std;

class Orquesta
{
public:
    vector<InstrumentoMusical*> listaInstrumentos;

    void tocaInstrumento(InstrumentoMusical* instru);
    void guardarInstrumento(InstrumentoMusical* instru);
    void tocaTodos();

};
#endif