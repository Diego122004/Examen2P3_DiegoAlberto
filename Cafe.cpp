#pragma once
#include "Cafe.h"
Cafe::Cafe() : Bebida() {};
Cafe::Cafe(string name, double precioB, int granos_Cafe) : Bebida(name, precioB) {
	this->granos_cafe = granos_Cafe;
};
double Cafe::calcPrecioFinal() {
	return precioBase + ((granos_cafe / 100.0) * precioBase);
};
int Cafe::getCafeL() {
	return this->granos_cafe;
};