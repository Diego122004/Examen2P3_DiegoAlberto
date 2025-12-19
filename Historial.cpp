#pragma once
#include "Historial.h"
#include <iostream>
#include <fstream>
using namespace std;
Historial::Historial() {
	total_vendido = 0;
};
Historial::~Historial() {};
Historial Historial::operator+(Bebida* b) {
	bebidas.push_back(b);
	total_vendido += b->calcPrecioFinal();
	return *this;
};
void Historial::guardarH() {
	ofstream file("historial.bin", ios::binary | ios::app);
	for (Bebida* b : bebidas) {
		double precio = b->calcPrecioFinal();
		int len = b->getNombre().size();

		file.write((char*)&len, sizeof(int));
		file.write(b->getNombre().c_str(), len);
		file.write((char*)&precio, sizeof(double));
	}
	file.close();
	bebidas.clear();
};
void Historial::cargarH() {
	ifstream file("historial.bin", ios::binary);
	total_vendido = 0;

	while (file.good()) {
		int len;
		file.read((char*)&len, sizeof(int));
		if (!file.good()) break;
		char* nombre = new char(len + 1);
		file.read(nombre, len);
		//nombre[len] = "\0";

		double precio;
		file.read((char*)&precio, sizeof(double));

		cout << nombre << " - L " << precio << endl;
		total_vendido = precio;
		delete[] nombre;

	}
	cout << "Ingresos totales hasta ahora: " << "\n" << total_vendido;
	file.close();
}