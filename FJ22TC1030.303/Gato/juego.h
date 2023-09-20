#ifndef JUEGO_H
#define JUEGO_H

#include "jugador.h"
#include "tablero.h"

class Juego {
	private:
		Jugador player[2];
		Tablero tablero;
	public:
		Juego();
		void start();
};

#endif