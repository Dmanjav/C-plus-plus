#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>
#include <string>

using namespace std;

class Fraccion 
{
    private:
        int numerador;
        int denominador;

    public:
        Fraccion();
        Fraccion(int num, int den);

        int getC(int a, int b);

        Fraccion operator + (Fraccion f);
        Fraccion operator - (Fraccion f);
        Fraccion operator * (Fraccion f);
        Fraccion operator / (Fraccion f);
        bool operator > (Fraccion f);
        bool operator < (Fraccion f);
        bool operator == (Fraccion f);

        void display();
        void display(int n);
        void displayFraccion();
};

#endif