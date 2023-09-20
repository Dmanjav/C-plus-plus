#include "Video.h"
#include "Episodio.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Episodio::Episodio(){}

Episodio::Episodio(string ID1, string Nombre1, string Genero1, string Fecha_estreno1, int Duracion1, double Calificacion1, int Temporada1) : Video(ID1, Nombre1, Genero1, Fecha_estreno1, Duracion1, Calificacion1)
{
    ID = ID1;
    Nombre = Nombre1;
    Genero = Genero1;
    Fecha_estreno = Fecha_estreno1;
    Duracion = Duracion1;
    Calificacion = Calificacion1;
    Temporada = Temporada1;
}

int Episodio::getTemporada()
{
    return Temporada;
}

void Episodio::setTemporada(int temp)
{
    Temporada = temp;
}

void Episodio::play()
{
    cout << "El episodio " << getNombre() << " se esta reproduciendo" << endl;
}

void Episodio::pausa()
{
    cout << "El episodio esta en pausa" << endl;
}

void Episodio::displayVideo()
{
    string Eps = "";
    cout << "\t \t El nombre del episodio es " << getNombre() << endl;
    cout << "\t \t El ID del episodio es " << getID() << endl;
    cout << "\t \t El Numero del episodio es " << getGenero() << endl;
    cout << "\t \t La fecha de estreno del episodio es " << getFecha() << endl;
    cout << "\t \t La Calificacion del episodio es " << getCalificacion() << endl;
    cout << "\t \t La Duracion del episodio es " << getDuracion() << endl;
    cout << "\t \t La temporada del episodio es " << getTemporada() << endl;
    cout << "\n";
}