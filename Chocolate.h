#pragma once
#include <iostream>
#include "Bebida.h"
using namespace std;

class Chocolate : public Bebida {
	int gramos_azucar;;
public:
	Chocolate();
	Chocolate(string name, double precioB, int gramos_azucar);
	double calcPrecioFinal();
	int getAzucarL();
};