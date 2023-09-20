#include "envio.h"
#include "sobre.h"
#include "paquete.h"

#include <iostream>

using namespace std;

int main(){

    Envio prueba1("Diego", "Serdan", "Azcapo", "CDMX", 24010, 62000, 125.45, 22.5, 30);
    prueba1.calculaCosto();
    Paquete prueba2("Carlos", "Del_Paseo","Echegaray","EdoMex", 54510, 89100, 229.79, 26, 30, 10, 2.85, 515.20);
    cout << prueba2.calculaCosto() << endl;
    Paquete prueba2b("Hector", "Lerdo","Madero","Chihuahua", 12345, 96301, 187.4, 26, 30, 12, 10, -1);
    cout << prueba2b.calculaCosto() << endl;
    Sobre prueba3(149.99, "Giovanna", "Bolivar","Bastones","Morelos", 13690, 54560, 99.99, 26,30);
    cout << prueba3.calculaCosto() << endl;

    return 0;
}