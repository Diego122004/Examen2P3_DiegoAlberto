#pragma once
#include "Te.h"

Te::Te() :Bebida() {
};
Te::Te(string name, double precioB, int esencia_H) : Bebida(nombre, precioBase) {
	this->esencia_herbal = esencia_H;
};
double Te::calcPrecioFinal() {
	return precioBase + ((esencia_herbal / 100.0) * precioBase);
};
