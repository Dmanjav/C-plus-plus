#include <iostream>
#include <string>

#include "Catalogo.h"
#include "Streaming.h"

using namespace std;

Streaming::Streaming(){}

bool isnumber(const string &str)
{
    for (char const &c : str)
    {
        if (isdigit(c) == 0)
            return false;
    }
    return true;
}

void Streaming::menus(string res, Catalogo cat)
{
    if (res == "1")
    {
        menu(cat);
    }
    else
    {
        if (res == "2")
        {
            menu(cat);
            cout << "\n";
            cout << "\t El filtrado va ser por calificacion o genero?" << endl;
            cout << "\t 1.Genero" << endl;
            cout << "\t 2.Calificacion" << endl;
            cin >> res;
            cout << "\n";
            cout << "\t -----------------------------------------------------------" << endl;
            cout << "\n";
            if (res == "1")
            {
                filtradogenero(cat);
                cout << "\n";
            }
            else if (res == "2")
            {
                filtradocalif(cat);
                cout << "\n";
            }
        }
        else if (res == "3")
        {
            cat.MostrarCatalogo(2);
            float calif;

            cout << "\t -----------------------------------------------------------" << endl;

            cout << "\t Ingresa la calificacion" << endl;
            cin >> calif;
            cout << "\n";
            cout << "\t -----------------------------------------------------------" << endl;
            cout << "\n";
            cat.mostrarfiltorcalif(calif);
        }
        else if (res == "4")
        {
            SetearVid(cat);
        }
    }
}

void Streaming::start()
{
    string res;
    Catalogo cat;
    cat.leerArchivo();
    while (res != "0")
    {
        cout << "\t \t ***BIENVENIDO A NETFLIX*** \n"
             << endl;
        cout << "\t 1.Cargar Archivo de Datos" << endl;
        cout << "\t 2. Filtrado de calificaciones o genero" << endl;
        cout << "\t 3. Peliculas con cierta calificacion" << endl;
        cout << "\t 4. Calificar un Video" << endl;
        cout << "\t 0. Salir" << endl;
        cout << "\n";
        {
            try
            {

                cin >> res;
                if (res == "0")
                {
                    break;
                }
                isnumber(res) ? menus(res, cat) : throw(123);
                cout << "\t \t ***BIENVENIDO A NETFLIX*** \n"
                     << endl;
                cout << "\t 1.Cargar Archivo de Datos" << endl;
                cout << "\t 2. Filtrado de calificaciones o genero" << endl;
                cout << "\t 3. Peliculas con cierta calificacion" << endl;
                cout << "\t 4. Calificar un Video" << endl;
                cout << "\t 0. Salir" << endl;
                cout << "\n";
                cin >> res;
                if (res == "0")
                {
                    break;
                }
                isnumber(res) ? menus(res, cat) : throw(123);
            }
            catch (int erro)
            {
                if (erro == 123)
                {
                    cout << "Esta mal, errorrr, ingrese un numero valido" << endl;
                }
            }
        }
        abort;
    }
}

void Streaming::menu(Catalogo cat)
{
    cat.MostrarCatalogo(1);
    cat.MostrarCatalogo(2);
}

void Streaming::filtradogenero(Catalogo cat)
{
    cout << "Introduzca el genero " << endl;
    string filtro;
    cin >> filtro;
    cat.mostrarfiltroGenSer(filtro);
}

void Streaming::filtradocalif(Catalogo cat)
{
    int res;
    cout << "\t Desea hacer el filtrado en peliculas o series" << endl;
    cout << "\t 1.Peliculas" << endl;
    cout << "\t 2.Series" << endl;
    cin >> res;
    cout << "\n";
    cout << "\t -----------------------------------------------------------" << endl;
    cout << "\n";
    if (res == 1)
    {
        float calif;
        cout << "\t Ingresa la calificacion" << endl;
        cin >> calif;
        cat.mostrarfiltorcalif(calif);
    }
    else if (res == 2)
    {
        string nombre;
        cout << "\t Ingrese el nombre de la serie" << endl;
        cin.ignore();
        getline(cin, nombre);
        float calif;
        cout << "\t Con que calificacion desea filtrar los episodios?" << endl;
        cin >> calif;
        cat.mostrarfiltroser(calif, nombre);
    }
}


void Streaming::SetearVid(Catalogo cat)
{
    cout << "\t Desea Calificar una Pelicula o una Serie" << endl;
    cout << "\t 1.Peliculas" << endl;
    cout << "\t 2.Series" << endl;
    int res;
    cin >> res;
    if (res == 1)
    {
        string nombre;
        float calif;
        cout << "\t Ingrese el nombre de la pelicula" << endl;
        cin.ignore();
        getline(cin, nombre);
        cout << "\n";
        cout << "\t Ingresa la calificacion" << endl;
        cin >> calif;
        cat.setearpelicula(calif, nombre);
        cout << "\n";
        cout << "--------------------------------------" << endl;
    }
    else if (res == 2)
    {
        string nombre;
        float calif;
        cout << "\t Ingrese el nombre de la Serie" << endl;
        cin.ignore();
        getline(cin, nombre);
        cout << nombre << endl;
        cout << "\n";
        cat.setearserieeps(nombre);
        cout << "\n";
        cout << "--------------------------------------" << endl;
    }
}
