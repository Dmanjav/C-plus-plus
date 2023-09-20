#ifndef CATALOGO_H
#define CATALOGO_H

#include "Serie.h"
#include "Pelicula.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Catalogo
{
private:
    Serie seriev;
    Pelicula peliculav;
    vector<Serie> Series;
    vector<Pelicula> Peliculas;

public:
    Catalogo();
    Catalogo(Serie sern, Pelicula peln);
    void guardarpeli(Pelicula pel);
    void guardarserie(Serie ser);
    void MostrarCatalogo(int res);
    void mostrarfiltorcalif(float res2);
    void mostrarfiltroser(float res3, string sernom);
    void mostrarfiltroGenSer(string filtro);
    bool operator>(Serie &ser);
    void leerArchivo();
    void setearpelicula(float es, string nomvid);
    void setearserieeps(string nomvid);
};

#endif