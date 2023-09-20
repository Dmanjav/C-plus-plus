#include "Tablero.h"
#include <fstream>
#include<string>
#include<iostream>
#include <sstream>
using namespace std;


Tablero::Tablero()
{
    for(int i=0; i<100; i++)
    {
        cas[i].set_numero(i+1);
        cas[i].set_cambio(0);
        //para que el tablero comience en 1
    }

    leerTablero();

    for(int i=0; i<100; i++)
    {
        //cas[i].toString();
        //:)
    }
    
}

void Tablero::leerTablero()
{
   std::ifstream archivo;
   // direccionarlo con pwd (linux o mac) o dir (windows)
   archivo.open("/home/avmejia/TEC/FEBJUN22/GitHub/FJ22TC1030.301/SerpientesEscaleras/Serpientes.txt");
   if (archivo.is_open()){
       string linea;
       while(getline(archivo,linea)){
          // //cout << linea << endl;
           stringstream stream(linea);
           //n variable donde se guardac
           string n;
           string c;
           getline(stream,n,',');
           getline(stream,c,',');
          // cout<<n<<endl;
          // cout << c << endl; 
           int num=stoi(n);
           int camb=stoi(c);
           //para convertir la cadena int

           cas[num-1].set_cambio(camb);

           
               
         }
   }
   
   
   archivo.close();
}

int Tablero::checarCasilla(int casi){
    if (casi > 99)
        casi = 99;
    return cas[casi].cambia_posicion();
    
}