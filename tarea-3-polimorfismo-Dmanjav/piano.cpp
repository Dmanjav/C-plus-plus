#include "piano.h"
#include "instrumento.h"

#include <vector>
#include <string>
#include <iostream>

Piano::Piano(){}

Piano::Piano(string nom)
{
    nombre = nom;
}

void Piano::tocar() 
{
    cout << "Soy el piano " << nombre << " y me estan tocando" << endl;
}

void Piano::afinar()
{
    cout << "Soy el piano " << nombre << " y me estan afinando" << endl;
}