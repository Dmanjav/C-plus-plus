#include "flauta.h"
#include "instrumento.h"

#include <vector>
#include <string>
#include <iostream>

Flauta::Flauta(){};

Flauta::Flauta(string nom)
{
    nombre = nom;
}

void Flauta::tocar() 
{
    cout << "Soy la flauta " << nombre << " y me estan tocando" << endl;
}

void Flauta::afinar()
{
    cout << "Soy la flauta " << nombre << " y me estan afinando" << endl;
}