#ifndef STREAMING_H
#define STREAMING_H

#include <iostream>
#include <string>

#include "Catalogo.h"

class Streaming
{
private:
    Catalogo cat;
    int res;

public:
    Streaming();
    void start();
    void filtradogenero(Catalogo cat);
    void menu(Catalogo cat);
    void filtradocalif(Catalogo cat);
    void SetearVid(Catalogo cat);
    void menus(string res, Catalogo cat);
};

#endif