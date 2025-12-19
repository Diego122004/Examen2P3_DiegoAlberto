#pragma once
#include "Menu.h"
#include "Cafe.h"
#include "Te.h"
#include "Chocolate.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

Menu::Menu() {};
Menu::~Menu() {
	vaciarMenu();
};
Menu Menu::operator+(Bebida* b) {
	menu.push_back(b);
	return *this;
};
void Menu::verMenu() {
	for (int i = 0; i < menu.size(); i++) {
		cout << i + 1 << ". "
			<< menu[i]->getNombre()
			<< " - l."
			<< menu[i]->calcPrecioFinal() << endl;
	};
};
void Menu::eliminar(int ind) {
	if (ind >= 0 && ind < menu.size()) {
		delete menu[ind];
		menu.erase(menu.begin() + ind);
	};
};
void Menu::vaciarMenu() {
	for (Bebida* b : menu) {
		delete b;
		menu.clear();
	};
};
int Menu::tam() {
	return menu.size();
};
Bebida* Menu::getBebida(int ind) {
	return menu[ind];
};

void Menu::guardarMenu() {
	ofstream file("menu.txt");

	for (Bebida* b : menu) {
		if (dynamic_cast<Cafe*>(b)) {
			Cafe* c = dynamic_cast<Cafe*>(b);
			file << "Cafe, " << c->getNombre() << ", "
				<< c->getCafeL() << ", "
				<< c->getPB() << ",\n";
		}
		else if (dynamic_cast<Te*>(b)) {
			Te* t = dynamic_cast<Te*>(b);
			file << "Te, " << t->getNombre() << ", "
				<< t->getHierbaL() << ","
				<< t->getPB() << ",\n";
		}
		else if (dynamic_cast<Chocolate*>(b)) {
			Chocolate* ch = dynamic_cast<Chocolate*>(b);
			file << "ch, " << ch->getNombre() << ", "
				<< ch->getAzucarL() << ","
				<< ch->getPB() << ",\n";
		}
	};
	file.close();
};
void Menu::cargarMenu() {
	ifstream file("menu.txt");
	string linea;
	vaciarMenu();

	while (getline(file, linea)) {
		string tipo, nombre, val, precio;
		stringstream ss(linea);

		getline(ss, tipo);
		getline(ss, nombre);
		getline(ss, val);
		getline(ss, precio);

		int valor = stoi(val);
		double preci = stod(precio);
		Bebida* b = nullptr;

		if (tipo == "Cafe")
			b = new Cafe(nombre, preci, valor);
		else if(tipo == "Te")
			b = new Te(nombre, preci, valor);
		else if (tipo == "Chocolate")
			b = new Chocolate(nombre, preci, valor);

		if (b != nullptr)
			menu.push_back(b);


	};
	file.close();
};