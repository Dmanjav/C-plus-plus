#include "MiExcepcion.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

MiExcepcion::MiExcepcion(){
}
MiExcepcion::MiExcepcion(string _mensaje){
    mensaje=_mensaje;
}
void MiExcepcion::display(){
    cout<<"Arriba el América"<<"\n";
}