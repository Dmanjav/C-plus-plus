#include "Video.h"

#include <iostream>
#include <string>

using namespace std;

Video::Video(){}

Video::Video(string ID1, string Nombre1, string Genero1, string Fecha_estreno1, int Duracion1, double Calificacion1)
{
    ID = ID1;
    Nombre = Nombre1;
    Genero = Genero1;
    Fecha_estreno = Fecha_estreno1;
    Duracion = Duracion1;
    Calificacion = Calificacion1;
}

string Video::getID()
{
    return ID;
}

string Video::getNombre()
{
    return Nombre;
}

string Video::getGenero()
{
    return Genero;
}

string Video::getFecha()
{
    return Fecha_estreno;
}

int Video::getDuracion()
{
    return Duracion;
}

double Video::getCalificacion()
{
    return Calificacion;
}

void Video::setID(int id_new)
{
    ID = id_new;
}

void Video::setNombre(string nom_new)
{
    Nombre = nom_new;
}

void Video::setGenero(string gen_new)
{
    Genero = gen_new;
}

void Video::setFecha(string fecha_new)
{
    Fecha_estreno = fecha_new;
}

void Video::setDuracion(int dur_new)
{
    Duracion = dur_new;
}

void Video::displayVideo()
{
    cout << "El video es: " << getID() << "," << getNombre() << "," << getGenero() << "," << getFecha() << "," << getDuracion() << endl;
}

void Video::setCalificacion(double calif_new)
{
    Calificacion = calif_new;
}

bool Video::operator>(double calif)
{
    bool comprobacion = false;
    if (Calificacion >= calif)
    {
        comprobacion = true;
    }
    return comprobacion;
    comprobacion = false;
}