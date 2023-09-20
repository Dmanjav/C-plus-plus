#ifndef JUGADOR_H_
#define JUGADOR_H_
#include <iostream>
#include "string"

using std::string;

class Jugador 
{
    private:
    
    char simbolo;
    string nombre;

    public:

    Jugador();
    char get_simbolo();
    string get_nombre();

    void set_simbolo(char simbolo1);
    void set_nombre(string nombre1);


};


#endif