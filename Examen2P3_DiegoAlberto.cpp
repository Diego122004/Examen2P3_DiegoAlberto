
#include <iostream>
#include "Menu.h"
#include "Historial.h"
#include "Cafe.h"
#include "Chocolate.h"
#include "Te.h"


using namespace std;

void mostrarMenu();

void mostrarMenu() {
    Menu* menu = new Menu();
    Historial* h = new Historial();
    cout << "LOmos cafe";
    cout << "1. Ver menu";
    cout << "2. Agregar bebida";
    cout << "3.  Eliminar bebida";
    cout << "4. verder Bebida";
    cout << "5. Ver historial";
    cout << "0. SALIR   ";
    int opcion;
    cin >> opcion;
    switch (opcion) {
    case 1: {
        menu->verMenu();
    };
    case 2: {
        int tipo, nivle;
        string name;
        double precio;
        cout << "1, cafe, 2 Te, 3 Choco";
        cin >> tipo;
        cout << "Nombre";
        cin >> name;
        cout << "Precio b";
        cin >> precio;
        cout << "NIVEL";
        cin >> nivle;
        Bebida* b = nullptr;

        if (tipo == 1)
            b = new Cafe(name, precio, nivle);
        else if (tipo == 2)
            b = new Te(name, precio, nivle);
        else if (tipo == 3)
            b = new Chocolate(name, precio, nivle);


    };

    case 3: {

    };
    }

}

int main()
{
    mostrarMenu();
    std::cout << "Hello World!\n";
}
