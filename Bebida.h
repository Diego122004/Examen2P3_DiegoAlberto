#pragma once
#include <iostream>
using namespace std;

class Bebida {
protected:
	string nombre;
	double precioBase;
public:
	Bebida();
	Bebida(string nom, double precioB);
	virtual ~Bebida();
	string getNombre();
	double getPB();
	virtual double calcPrecioFinal() = 0;

};