#include "Video.h"
#include "Pelicula.h"

#include <string>
#include <iostream>
#include <vector>

using namespace std;

Pelicula::Pelicula(){}

Pelicula::Pelicula(string ID1, string Nombre1, string Genero1, string Fecha_estreno1, int Duracion1, double Calificacion1) : Video(ID1, Nombre1, Genero1, Fecha_estreno1, Duracion1, Calificacion1)
{
    ID = ID1;
    Nombre = Nombre1;
    Genero = Genero1;
    Fecha_estreno = Fecha_estreno1;
    Duracion = Duracion1;
    Calificacion = Calificacion1;
}

void Pelicula::seleccionarIdioma()
{
    int res;
    cout << " ** IDIOMAS ** " << endl;
    cout << "1. ESPAÑOL" << endl;
    cout << "2. INGLES" << endl;
    cout << "3. CHINO" << endl;
    cout << "Seleccione el idioma ";
    cin >> res;
    if (res != 1 and res != 2 and res != 3)
    {
        cout << "ERROR - no se encontro el idioma " << endl;
    }
    else
    {
        if (res == 1)
        {
            cout << '\n';
            cout << "Seleccionaste Español" << endl;
        }
        else
        {
            if (res == 2)
            {
                cout << '\n';
                cout << "Seleccionaste Ingles" << endl;
            }
            else
            {
                cout << '\n';
                cout << "Seleccionaste CHINO" << endl;
            }
        }
    }
}

void Pelicula::displayVideo()
{
    cout << "\t \t El ID de la pelicula es " << getID() << endl;
    cout << "\t \t El Nombre de la pelicula es " << getNombre() << endl;
    cout << "\t \t Los Generos de la pelicula es " << getGenero() << endl;
    cout << "\t \t La Fecha de estreno de la pelicula " << getFecha() << endl;
    cout << "\t \t La Duracion de la pelicula es " << getDuracion() << " minutos" << endl;
    cout << "\t \t La calificacion de la pelicula es " << getCalificacion() << endl;
}