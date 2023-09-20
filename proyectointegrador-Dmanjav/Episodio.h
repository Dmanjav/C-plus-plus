#ifndef EPISODIO_H
#define EPISODIO_H

#include "Video.h"

#include <iostream>
#include <string>
#include <vector>

class Episodio : public Video
{
private:
    int Temporada;

public:
    Episodio();
    Episodio(string ID1, string Nombre1, string Genero1, string Fecha_estreno1, int Duracion1, double Calificacion1, int Temporada1);
    int getTemporada();
    void setTemporada(int temp);
    void displayVideo();
    void play();
    void pausa();
};

#endif