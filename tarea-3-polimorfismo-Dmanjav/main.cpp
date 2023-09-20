#include "instrumento.h"
#include "piano.h"
#include "flauta.h"
#include "orquesta.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Orquesta orquesta;
    Piano piano1("piano 1");
    Flauta flauta1("Stradivarius 1");
    InstrumentoMusical *instru;
    instru = &piano1;
    orquesta.guardarInstrumento(instru);
    instru = &flauta1;
    orquesta.guardarInstrumento(instru);
    orquesta.tocaTodos();
    orquesta.tocaInstrumento(instru);
    
    return 0;
}