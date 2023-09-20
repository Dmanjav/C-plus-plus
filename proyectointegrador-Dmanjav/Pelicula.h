#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h"

#include <string>
#include <iostream>
#include <vector>

class Pelicula : public Video
{
public:
    Pelicula();
    Pelicula(string ID1, string Nombre1, string Genero1, string Fecha_estreno1, int Duracion1, double Calificacion1);
    /*// cree el vector de PELICULAS
    vector<string> Peliculas;
    // le cambie el nombre a la funcion antes era agregarLista()
    void Guardarpelicula();*/
    void seleccionarIdioma();
    void displayVideo();
};

#endif
