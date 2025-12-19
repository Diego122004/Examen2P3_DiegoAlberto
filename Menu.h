#pragma once
#include <vector>
#include "Bebida.h"
#include <fstream>
#include <iostream>

using namespace std;

class Menu {
	vector<Bebida*> menu;
public:
	Menu();
	~Menu();
	Menu operator +(Bebida* b);
	void verMenu();
	void eliminar(int ind);
	void vaciarMenu();

	void guardarMenu();
	void cargarMenu();
	Bebida* getBebida(int ind);
	int tam();

};