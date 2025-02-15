#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include "GameObject.h"
#include "Bomber.h"
#include "MuroMetalico.h"
#include "SueloCesped.h"


class MapGenerator
{
private:
	vector<GameObject*> vectorObjectosJuego;
	int anchoPantalla;
	int altoPantalla;
	SDL_Renderer* renderer;

public:
	// Constructores y destructores
	MapGenerator();
	MapGenerator(SDL_Renderer* _renderer, int _anchoPantalla, int _altoPantalla);

	// M�todos accesores
	int getAnchoPantalla() { return anchoPantalla; }
	void setAnchoPantalla(int _anchoPantalla) { anchoPantalla = _anchoPantalla; }

	int getAltoPantalla() { return altoPantalla; }
	void setAltoPantalla(int _anchoPantalla) { altoPantalla = _anchoPantalla; }

	SDL_Renderer* getRendered() { return renderer; }
	void setRenderer(SDL_Renderer* _renderer) { renderer = _renderer; }

	// M�todos heredados

	// M�todos propios
	bool crearObjetosJuego(string _path);
	void transferirObjetosJuego(vector<GameObject*>& _vectorObjetosJuegoDestino);

};
