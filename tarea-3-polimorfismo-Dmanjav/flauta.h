#ifndef FLAUTA_H
#define FLAUTA_H

#include "instrumento.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Flauta : public InstrumentoMusical
{
public:

    
    Flauta();
    Flauta(string nom);

    void tocar();
    void afinar();
    
    string nombre;
};
#endif