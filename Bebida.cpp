#pragma once
#include <iostream>
#include "Bebida.h"

Bebida::Bebida() {};
Bebida::Bebida(string name, double precioB) {
	this->nombre = name;
	this->precioBase = precioB;

};
Bebida::~Bebida() {};
string Bebida::getNombre() {
	return nombre;
};
double Bebida::getPB() {
	return precioBase;
};

