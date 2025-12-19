#pragma once
#include <iostream>
#include "Bebida.h"
using namespace std;

class Te : public Bebida {
	int esencia_herbal;
public:
	Te();
	Te(string name, double precioB, int esencia_H);
	double calcPrecioFinal();
	int getHierbaL();
};