#include <iostream>
using std::cout;
using std::cin;
#include "Impresora.h"
#include "MiExcepcion.h"
#include <string>
using std::string;

int main(){
    Impresora impresora("holaMundo",120);
    try{ //Lugares posibles excepción
    impresora.imprimir("Ahí están los datos, el pueblo es mucha pieza. Lo que siempre he dicho y se niegan a aceptarlo nuestros adversarios, expresó López Obrador al proyectar una tabla con los resultados preliminares de los comicios del 5 de junio. Además de los resultados, el mandatario federal se dijo muy satisfecho por que no hubo actos de violencia graves y los ciudadanos como siempre se portaron a la altura de las circunstancias. Mis felicitaciones a todos los que participaron ayer en seis estados, lo más importante lo subrayó, fue la no violencia que se instalaron casi todos las las casillas y no se le diera espacio a la nota roja, indicó el presidente de México este lunes durante su habitual conferencia de prensa desde Palacio Nacional.");
    }
    catch(int &numHojas){ //Lanzo por valor y recibo por ref, excepto los apuntadores
      cout<<"Atrapado como entero, errror "<<numHojas<<"\n";
    }
    catch(char const* error){
        cout<<"Cachamos el apuntador a caracter "<<error<<"\n";
    }
    catch(string &error1){
        cout<<"Cachamos al string, "<<error1<<"\n";
    } 
    catch(MiExcepcion &Ex){
        Ex.display();
    }
    catch(...){ //Este es el CachaTodo 
        cout<<"Soy el CachaTodo :)"<<"\n"; 
}
}