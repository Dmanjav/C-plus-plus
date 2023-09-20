#include "fraccion.h"
#include "excepcion.h"

#include <iostream>

using namespace std;

int main(){
  try { 
    Fraccion f1(1,2);
    Fraccion f2(3,4);
    

    Fraccion suma = f1+f2;
    Fraccion resta = f1-f2;
    Fraccion multi = f1*f2;
    Fraccion divi = f1/f2;
   
        
    cout << "Resultado de: ";
    f1.display();
    cout << " y ";
    f2.display();
    cout << "\n";
    cout << "Suma: " << endl;
    suma.display();
    cout << "\n";
    suma.displayFraccion();
    suma.display(3);
    cout << "Restando: " << endl;
    resta.display();
    cout << "\n";
    resta.displayFraccion();
    resta.display(3);
    cout << "Multiplicacion: " << endl;
    multi.display();
    cout << "\n";
    multi.displayFraccion();
    multi.display(3);
    cout << "Division: " << endl;
    divi.display();
    cout << "\n";
    divi.displayFraccion();
    divi.display(3);
    cout << "\n";
    cout << "Aqui deberia de salir el error al hacer la operacion con el denominador invalido: " << endl;
    cout << "La fraccion es de 5/-2 por lo que deberia de salir el error. " << endl;
    cout << "\n";
    Fraccion f3(5,-2);
    Fraccion error = f1-f3;
    
    error.display();
    error.displayFraccion();
  }
  catch (Excepcion &mens)
  {
    mens.display();
  }
}   