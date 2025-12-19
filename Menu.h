#pragma once
#include <vector>
#include "Bebida.h"

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
	void cargarManu();
	Bebida* getBebida(int ind);
	int tam();

};