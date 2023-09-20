//    MODOS DE HERENCIA
//1.- public (visible a cualqiuera)
//2.- protected (visible a la clase base y sus subclases solamente)
//3.- private (visible solo a la clase base)

//---------------------------------------------------------------
//  CLASE BASE | CLASE DERIVADA  CLASE DERIVADA  CLASE DERIVADA |
//---------------------------------------------------------------
//             |  MODO public    MODO protected  MODO  private  |    <- Modos de herencia
//---------------------------------------------------------------
//  public     |    public         protected      private       |
//  protected  |    protected      protected      private       |
//  private    |    No heredado    No heredado    No heredado   |
// -------------------------------------------------------------

#include <iostream>
using std::cout;
using std::endl;

class Base
{
    private:
        int priv;

    public:
        int pub;
        Base(){
            cout<<"Dentro del constructor base"<<endl;
        }
        Base(int a, int b, int c){
            pub = a;
            priv = b;
            prot = c;
        }
        void printPublico()
        {
            cout << "print de la clase Base" << endl;
            
            cout << pub << endl;
            cout << prot << endl;
            cout << priv << endl; 
        }

        ~Base()
        {
            cout << "Estoy en el destructor de la clase base" << endl;
        }
        
    protected:
        int prot;

};

class Derivada : private Base
{
    public:

    int pubdev; 

    Derivada()
    {
        cout << "Constructor dentro de la clase derivada" << endl;
    }

    Derivada(int a, int b, int c, int d): Base(a,b,c)
    {
        pubdev = d;
    }

    void printpublico()
    {
        Base::printPublico();
        cout << "Dentro de print publico de derivada" << endl;
        cout << pubdev << endl;
    }
    
    ~Derivada()
    {
        cout << "Estoy dentro del destructor de la clase derivada" << endl;
    }

    
};

int main() {
    //Base obj;
    //obj.pub;
    //obj.priv;
    //obj.prot;

    Derivada obj2(1,2,3,4);
    obj2.printpublico();
    return 0;
};
