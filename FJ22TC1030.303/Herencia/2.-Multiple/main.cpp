#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

class D
{
    public:
        void print()
        {
            cout << "Imprimo desde la clase D" << endl;
        }
};

class A: virtual public D
{
    public:
        void imprimir()
        {
            cout << "Imprimo desde la clase A" << endl;
        }
};

class B: virtual public D
{
    public:
        void imprimir()
        {
            cout << "Imprimo desde la clase B" << endl;
        }
};

class C: public A, public B
{

};


class Ave
{
    public:
        string nombre;
        Ave(string nom)
        {
            nombre = nom;
        }

        void vuela()
        {
            cout << "Soy el Ave " << nombre << " y vuelo" << endl;
        }

        Ave()
        {

        }

};

class Aguila: public Ave
{
    public:
        Aguila(string nom)
        {
            nombre = nom;
        }

        Aguila()
        {

        }

};

class Avestruz: public Ave
{
    public:
        Avestruz(string nom)
        {
            nombre = nom;
        }
        void correRapido()
        {
            cout << "Soy el Ave "<< nombre << " y corro muy rapido" << endl;
        }
        
        Avestruz()
        {

        }
        void vuela()
        {
            cout << "Soy el Ave " << nombre << " y no vuelo" << endl;
        }
};

class Pinguino: public Ave
{
    public:
        Pinguino(string nom)
        {
            nombre = nom;
        }
        void nada()
        {
            cout << "Soy el Ave " << nombre << " y nado muy bien" << endl;
        }

        Pinguino()
        {

        }

        void vuela()
        {
            cout << "Soy el Ave " << nombre << " y no vuelo" << endl;
        }
};


int main()
{
    /*C obj;
    obj.A::imprimir();
    obj.B::imprimir();
    obj.print();*/

    Aguila aguilita("Lauren");
    Avestruz avestrucito("Oswaldo");
    Pinguino pinguinito("Pablo");
    aguilita.vuela();
    avestrucito.vuela();
    pinguinito.vuela(); 
    pinguinito.nada();
    return 0;
}