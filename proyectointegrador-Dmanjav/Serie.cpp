#include "Episodio.h"
#include "Serie.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Serie::Serie(){}

Serie::Serie(string IDN, string NOMBREN, string GENERON)
{
    ID = IDN;
    Nombre = NOMBREN;
    Genero = GENERON;
}

void Serie::agregarfavs()
{
    cout << getname() << " Ha sido agregado a tus Favs" << endl;
}

string Serie::getID()
{
    return ID;
}

string Serie::getname()
{
    return Nombre;
}

string Serie::getgeneron()
{
    return Genero;
}

void Serie::setID(string idnn)
{
    ID = idnn;
}

void Serie::setname(string nombrr)
{
    Nombre = nombrr;
}

void Serie::setgenero(string gene)
{
    Genero = gene;
}

void Serie::guardareps(Episodio ep)
{
    cantidadEPS.push_back(ep);
}

void Serie::printSerie()
{
    // cout << "Los datos de Serie " << getID() << "," << getname() << "," << getgeneron() << endl;
    cout << "\t \t La serie es: " << getname() << endl;
    cout << "\t \t El ID de la series es: " << getID() << endl;
    cout << "\t \t Los Generos de la serie son: " << getgeneron() << endl;
}

void Serie::mostrareps()
{
    int var = cantidadEPS.size();
    cout << "Episodios de: " << getname() << endl;
    for (int i = 0; i < var; i++)
    {
        Episodio epsi = cantidadEPS[i];
        epsi.displayVideo();
    }
}

float Serie::promedioser()
{
    double acum;
    double rest;
    for (int i = 0; i < cantidadEPS.size(); i++)
    {
        Episodio ep;
        ep = cantidadEPS[i];
        rest = ep.getCalificacion();
        acum = acum + rest;
    }
    float prom = acum / cantidadEPS.size();
    return prom;
}

void Serie::califeps()
{
    double acum;
    double rest;
    for (int i = 0; i < cantidadEPS.size(); i++)
    {
        Episodio ep;
        ep = cantidadEPS[i];
        rest = ep.getCalificacion();
        acum = acum + rest;
    }
    float prom = acum / cantidadEPS.size();
}

void Serie::filtroeps(float rest)
{
    Episodio eps;
    for (int i = 0; i < cantidadEPS.size(); i++)
    {
        eps = cantidadEPS[i];
        bool guaf = false;
        guaf = eps > (rest);
        // cout << guaf << endl;
        if (guaf == true)
        {
            eps.displayVideo();
            cout << "\n";
        }
    }
}

void Serie::seteareps(float calif, string noma)
{
    Episodio ep;
    string nom;
    mostrareps();

    for (int i = 0; i < cantidadEPS.size(); i++)
    {
        ep = cantidadEPS[i];
        nom = ep.getNombre();
        if (nom == noma)
        {
            cantidadEPS[i].setCalificacion(calif);
            // cantidadEPS.erase(cantidadEPS.begin() + i);
            // cout << cantidadEPS.size() << endl;
            cout << "\n";
            // cantidadEPS.push_back(ep);
            cout << "Los datos del episodio ahora son" << endl;
            cantidadEPS[i].displayVideo();
        }
    }
}