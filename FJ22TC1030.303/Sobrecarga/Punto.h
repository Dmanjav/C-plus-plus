#ifndef PUNTO_H_
#define PUNTO_H_

class Punto
{
    private:
        int x;
        int y;
    
    public:
        Punto();
        Punto(int x1, int y1);
        Punto operator + (Punto &p);
        Punto operator + (Punto *p);
        void display();

};

#endif