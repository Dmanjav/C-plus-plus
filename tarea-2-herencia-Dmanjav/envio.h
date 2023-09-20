#ifndef ENVIO_H
#define ENVIO_H
#include <iostream>
#include <string>

using namespace std;

class Envio{

    private:
        string nom;
        string dir;
        string city;
        string estate;
        int pRem;
        int pDest;
    
    protected:
        double cEnv;
        double larg;
        double anchoo;

    public:
        Envio();
        Envio(string nombre, string direccion, string ciudad, string estado, int codPostrem, int codPostdest, double costEnvio, double largo, double ancho); 
        
        string getNomb();
        void setNomb(string nomb);
        string getDir();
        void setDir(string direc);
        string getCiud();
        void setCiud(string ciud);
        string getState();
        void setState(string estado);
        int getRem();
        void setRem(int rem);
        int getDest();
        void setDest(int dest);
        double getCostoE();
        void setCostoE(double costoE);
        double getL();
        void setL(double larg);
        double getA();
        void setA(double anch);      
        virtual double calculaCosto();
};
#endif