#pragma once
#include <iostream>
#include "Bebida.h"
using namespace std;

class Cafe: public Bebida {
	int granos_cafe;
public:
	Cafe();
	Cafe(string name, double precioB, int grns_Cafe);
	double calcPrecioFinal();

};