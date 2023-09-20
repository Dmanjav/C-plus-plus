#include "orquesta.h"
#include "instrumento.h"

#include <iostream>
#include <vector>

using namespace std;

void Orquesta::tocaInstrumento(InstrumentoMusical* instru)
{
    instru -> tocar();
}

void Orquesta::guardarInstrumento(InstrumentoMusical* instru)
{
    listaInstrumentos.push_back(instru);
    instru -> afinar();
}

void Orquesta::tocaTodos()
{
    float ls = listaInstrumentos.size();
    for (int i = 0; i < 1; i++)
    {
        listaInstrumentos[i] -> tocar();
    }
}