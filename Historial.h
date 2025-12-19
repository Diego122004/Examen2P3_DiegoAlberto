#pragma once
#include <vector>
#include "Bebida.h"

using namespace std;

class Historial {
	vector<Bebida*> bebidas;
	double total_vendido;
public:
	Historial();
	~Historial();

	Historial operator+(Bebida* b);
	void guardarH();
	void cargarH();

};
