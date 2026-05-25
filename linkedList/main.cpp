#include <iostream>
#include "LinkedList.h"
using namespace std;
LinkedList list;

int main()
{
    int option;
    int value;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Insertar nodo\n";
        cout << "2. Imprimir lista\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Ingrese un valor: ";
            cin >> value;

            list.insert(value);

            cout << "Nodo insertado correctamente\n";
            break;

        case 2:
            cout << "\nLista enlazada:\n";
            list.print();
            break;

        case 3:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion invalida\n";
            break;
        }

    } while (option != 3);

    return 0;
}
