#include "Catalogo.h"
#include "Serie.h"
#include "Pelicula.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Catalogo::Catalogo(){}

Catalogo::Catalogo(Serie sern, Pelicula peln)
{
    seriev = sern;
    peliculav = peln;
}

void Catalogo::guardarpeli(Pelicula pel)
{
    Peliculas.push_back(pel);
}

void Catalogo::guardarserie(Serie ser)
{
    Series.push_back(ser);
}

void Catalogo::MostrarCatalogo(int res)
{
    int vec1 = Series.size();
    int vec2 = Peliculas.size();
    if (res == 1)
    {
        cout << '\n';
        cout << "**SERIES EN CATALOGO**" << endl;
        cout << '\n';
        for (int i = 0; i < vec1; i++)
        {
            Serie guarda1 = Series[i];
            guarda1.printSerie();
            guarda1.mostrareps();
            cout << '\n';
        }
    }
    else
    {
        if (res == 2)
        {
            cout << '\n';
            cout << " **PELICULAS EN CATALOGO **" << endl;
            cout << '\n';
            for (int i = 0; i < vec2; i++)
            {
                Pelicula guarda2 = Peliculas[i];
                guarda2.displayVideo();
                cout << "\n";
            }
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }
}

void Catalogo::leerArchivo()
{
    // cout << "Si sirvo" << endl;
    vector<string> Lista;

    ifstream baseDatos;
    baseDatos.open("BasePeliculas.csv");
    if (baseDatos.is_open())
    {
        string linea;
        getline(baseDatos, linea);
        while (getline(baseDatos, linea))
        {
            string ID;
            string NOmbre;
            string minutos;
            string generos;
            string calif;
            string fecha;
            string epiNomb;
            string temp;
            string nEpi;
            string IDep;
            stringstream token(linea);
            getline(token, ID, ',');
            getline(token, NOmbre, ',');
            getline(token, minutos, ',');
            getline(token, generos, ',');
            getline(token, calif, ',');
            getline(token, fecha, ',');
            getline(token, epiNomb, ',');
            getline(token, temp, ',');
            getline(token, nEpi, ',');
            getline(token, IDep, ',');
            try
            {
                int duracion = stoi(minutos);
                double calificacion = stod(calif);
                if (IDep == "\r")
                {
                    Pelicula peli(ID, NOmbre, generos, fecha, duracion, calificacion);
                    guardarpeli(peli);
                }
                else
                {
                    Episodio ep(IDep, epiNomb, nEpi, fecha, duracion, calificacion, stoi(temp));
                    bool prueba = false;
                    int var1 = Series.size();
                    for (int i = 0; i < Series.size(); i++)
                    {
                        string nnom = Series[i].getname();
                        if (Series[i].getname() == NOmbre)
                        {
                            Series[i].guardareps(ep);
                            prueba = true;
                        }
                    }
                    if (prueba == false)
                    {
                        Serie ser(ID, NOmbre, generos);
                        ser.guardareps(ep);
                        guardarserie(ser);
                    }
                    // cout << "Es serie" << endl;
                }
            }
            catch (invalid_argument error)
            {
                cout << "Error obteniendo la informacion" << endl;
            }
        }
        baseDatos.close();
    }
}

void Catalogo::mostrarfiltorcalif(float res2)
{
    Pelicula pelis;
    for (int i = 0; i < Peliculas.size(); i++)
    {
        pelis = Peliculas[i];
        bool guaf = false;
        guaf = pelis > (res2);
        if (guaf == true)
        {
            pelis.displayVideo();
            cout << "\n";
        }
    }
}

void Catalogo::mostrarfiltroGenSer(string filtro)
{
    Serie serA;
    Pelicula peli;
    string arrrg;
    int tuqui;
    for (int i = 0; i < Peliculas.size(); i++)
    {
        peli = Peliculas[i];
        arrrg = peli.getGenero();
        tuqui = arrrg.find(filtro);
        if (tuqui < arrrg.size())
        {
            peli.displayVideo();
            cout << "\n";
        }
    }
    for (int i = 0; i < Series.size(); i++)
    {
        serA = Series[i];
        arrrg = serA.getgeneron();
        tuqui = arrrg.find(filtro);
        if (tuqui < arrrg.size())
        {
            serA.printSerie();
            cout << "\n";
        }
    }
}

void Catalogo::mostrarfiltroser(float res3, string sernom)
{
    Serie ser;
    string nombresito;
    for (int i = 0; i < Series.size(); i++)
    {
        ser = Series[i];
        nombresito = ser.getname();
        // cout << nombresito << endl;
        if (sernom == nombresito)
        {
            ser.filtroeps(res3);
        }
    }
}

void Catalogo::setearpelicula(float es, string nomvid)
{
    Pelicula pel;
    string name;
    for (int i = 0; i < Peliculas.size(); i++)
    {
        pel = Peliculas[i];
        name = pel.getNombre();
        if (name == nomvid)
        {
            Peliculas[i].setCalificacion(es);
            cout << "\n";
            cout << "Ahora los datos de la pelicula son estos" << endl;
            Peliculas[i].displayVideo();
        }
    }
}

void Catalogo::setearserieeps(string nomvid)
{
    Serie ser;
    string name;
    for (int i = 0; i < Series.size(); i++)
    {
        ser = Series[i];
        name = ser.getname();
        if (name == nomvid)
        {
            string nombre;
            float calif;
            Series[i].printSerie();
            cout << "\n";
            Series[i].mostrareps();
            cout << "\t Ingrese el nombre del episodio" << endl;
            // cin.ignore();
            getline(cin, nombre);
            cout << nombre << endl;
            cout << "\n";
            cout << "\t Ingresa la calificacion" << endl;
            cin >> calif;
            Series[i].seteareps(calif, nombre);
            cout << "------------------------------------" << endl;
            cout << "\n";
        }
    }
}