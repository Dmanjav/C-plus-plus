#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <string>

using namespace std;

class Video
{
protected:
    string ID;
    string Nombre;
    string Genero;
    string Fecha_estreno;
    int Duracion;
    double Calificacion;

public:
    Video();
    Video(string ID1, string Nombre1, string Genero1, string Fecha_estreno1, int Duracion1, double Calificacion1);
    string getID();
    string getNombre();
    string getGenero();
    string getFecha();
    int getDuracion();
    double getCalificacion();
    void setID(int idn);
    void setNombre(string nom);
    void setFecha(string fechan);
    void setGenero(string genn);
    void setDuracion(int durn);
    virtual void displayVideo() = 0;
    void setCalificacion(double califn);
    bool operator>(double calificacion);
};

#endif