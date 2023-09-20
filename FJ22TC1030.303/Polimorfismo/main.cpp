#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Envio_superior{
    public:
    virtual double calculaCosto()=0;
};

class Envio{

    public:
    double x;
    virtual double calculaCosto()=0;
        
        
    


};


class Paquete:public Envio,public Envio_superior
{
    public:
    double y;
    double calculaCosto(){
        cout<<"Calcula el costo desde paquete"<<endl;
        return y;;

    }
 
};



class Sobre:public Envio,public Envio_superior
{
    public:
     double z;
     double calculaCosto(){
    
        cout<<"Calcula el costo desde sobre"<<endl;
        return z;
    }

};


    
int main(){
    //Envio en;
    Paquete paq;
    Sobre sob;
    //en.calculaCosto();
    paq.calculaCosto();
    sob.calculaCosto();
    
    Envio *ap;
    ap = &paq;
    ap->calculaCosto();
    ap = &sob;
    ap->calculaCosto();




}  
