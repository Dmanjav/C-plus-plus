#include "fraccion.h"
#include "excepcion.h"

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

Fraccion::Fraccion(){
    numerador = 0;
    denominador = 0;
}

Fraccion::Fraccion(int num,int den)
{
    if ((den < 0))
    {
        Excepcion mens;
        throw (mens);
    }
    else
    {
        int b = __gcd(num, den);
        numerador = num/b;
        denominador = den/b;
    }
}

int Fraccion::getC(int a,int b)
{
    int respueesta;
    if (a < b)
    {
        for (int i = b; i > 0; i--)
        {
            if(a % i == 0 && b % i == 0)
            {
                respueesta = i;
                i = 0;    
            }
        } 
    }
    if (a>b)
    {
        for (int i = a; i > 0; i--)
        {
            if(a % i == 0 && b% i == 0)
            {
                respueesta = i;
                i = 0;    
            }
        } 
    }
    return respueesta;
}

Fraccion Fraccion::operator + (Fraccion f)
{
    int cDen = denominador * f.denominador;
    int nNum = numerador * f.denominador + f.numerador * denominador;
    Fraccion respuesta(nNum,cDen);
    return respuesta;
}

Fraccion Fraccion::operator - (Fraccion f)
{
    int cDen = denominador * f.denominador;
    int nNum = numerador * f.denominador - f.numerador * denominador;
    Fraccion respuesta(nNum,cDen);
    return respuesta;
}

Fraccion Fraccion::operator * (Fraccion f)
{
    int rNum = f.numerador * numerador;
    int rDen = f.denominador * denominador;
    Fraccion respuesta(rNum,rDen);
    return respuesta;
}

Fraccion Fraccion::operator / (Fraccion f)
{
    int resNum = numerador * f.denominador;
    int resDen = denominador * f.numerador;
    Fraccion respuesta(resNum,resDen);
    return respuesta;
}

bool Fraccion::operator > (Fraccion f)
{
    int a = numerador * f.denominador;
    int b = f.numerador * denominador;
    bool respesta = a > b;
    return respesta;
}

bool Fraccion::operator < (Fraccion f)
{
    int a=numerador*f.denominador;
    int b=f.numerador*denominador;
    bool respueesta = a<b;
    return respueesta;
}

bool Fraccion::operator == (Fraccion f)
{
    int a = numerador * f.denominador;
    int b = denominador * f.numerador;
    bool resp = a == b;
    return resp;
}

void Fraccion::display()
{
    cout << numerador << "/" << denominador;
}

void Fraccion::display(int n)
{
    string esp;
    for (int i = 0; i < n; i++)
    {
        esp += " ";
    }
    cout << esp << numerador << "/" << esp << denominador << endl;
}

void Fraccion::displayFraccion()
{
    double res = double(numerador)/double(denominador);
    cout<< res <<endl;
}