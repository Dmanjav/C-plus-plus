#ifndef PIANO_H
#define PIANO_H

#include "instrumento.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Piano : public InstrumentoMusical
{
public:

    string nombre;

    Piano();
    Piano(string nom);

    void tocar();
    void afinar();

};
#endif