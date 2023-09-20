#ifndef SERIE_H
#define SERIE_H

#include "Episodio.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Serie
{
private:
    string ID;
    string Nombre;
    string Genero;
    int Temporada;
    vector<Episodio> cantidadEPS;

public:
    Serie();
    Serie(string IDN, string NOMBREN, string GENERON);
    void agregarfavs();
    void guardareps(Episodio ep);
    string getID();
    string getname();
    string getgeneron();
    void setID(string idnue);
    void setname(string newname);
    void setgenero(string gen);
    void filtroeps(float rest);
    void printSerie();
    void mostrareps();
    float promedioser();
    void califeps();
    void seteareps(float calif, string noma);
};

#endif