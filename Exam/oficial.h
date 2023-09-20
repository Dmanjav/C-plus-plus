#include <iostream>
#include <string>

using namespace std;

class Oficial
{
    public:
        Oficial();
        Oficial(int id, string nom, string ran);
        void display();

    private:
        int noIdentificaion;
        string nombre;
        string rango;
};