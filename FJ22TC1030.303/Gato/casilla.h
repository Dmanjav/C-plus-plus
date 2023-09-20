#ifndef CASILLA_H_
#define CASILLA_H_


class Casilla{

    private:
        char simbolo;
        int posicion;

    public:

        Casilla();
        char getSimbolo();
        int getPosicion();
        void setSimbolo(char sim);
        void setPosicion(int pos);
        bool ocupada();
        
};

#endif