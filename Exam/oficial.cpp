#include "oficial.h"

#include <iostream>
#include <string>

using namespace std;

Oficial::Oficial(){};

Oficial::Oficial(int id, string nom, string ran)
{
    noIdentificaion = id;
    nombre = nom;
    rango = ran;
};

void Oficial::display()
{
    cout << "\t Se muestran los datos del oficial: " << endl;
    cout << "\t\t El id es: " << noIdentificaion << endl;
    cout << "\t\t El nombre es: " << nombre << endl;
    cout << "\t\t El rango es: " << rango << endl;
}