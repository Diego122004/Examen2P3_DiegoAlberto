#pragma once
#include "Chocolate.h"
Chocolate::Chocolate() :Bebida() {
};
Chocolate::Chocolate(string name, double precioB, int gramos_azucar) : Bebida(nombre, precioBase) {
	this->gramos_azucar = gramos_azucar;
};
double Chocolate::calcPrecioFinal() {
	return precioBase + ((gramos_azucar / 100.0) * precioBase);
};
