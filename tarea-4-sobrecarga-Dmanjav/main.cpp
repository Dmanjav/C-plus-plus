#include "fraccion.h"

#include <iostream>

using namespace std;

int main(){

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

  return 0;  
}