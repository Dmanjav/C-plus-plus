#ifndef IMPRESORA_H
#define IMPRESORA_H
#include <string>
using std::string;


class Impresora{
    private:
        string nombre;
        int numHojas;
    public:
        Impresora();
        Impresora(string _nombre, int _numHojas);
        void imprimir(string _nombre);
        int agregarHojas(int _numHojas);
        
};
#endif