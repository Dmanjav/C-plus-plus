#include "Impresora.h"
#include <iostream>
using std::cout;
using std::cin;
#include "string"
using std::string;
#include "MiExcepcion.h"

Impresora::Impresora(){
}
Impresora::Impresora(string _nombre, int _numHojas){
    nombre=_nombre;
    numHojas=_numHojas;
}
void Impresora::imprimir(string _nombre){
    int numHojasUsadas=(_nombre.size()/5);   
    if (numHojas<numHojasUsadas){
        //throw(911);
        //throw("NOS FALTAN HOJAS");
        //string julian="esto sí es un string";
        //throw(julian);
        MiExcepcion Ex;
        throw(Ex); //El throw va en donde se general el error
    }
    cout<<"Soy la Impresora "<<_nombre<<" y me quedan "<<(numHojas-numHojasUsadas)<<"\n";
}
int Impresora::agregarHojas(int _numHojas){
    return 0;
}