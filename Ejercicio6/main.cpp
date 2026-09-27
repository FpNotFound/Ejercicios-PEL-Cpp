#include <iostream>
#include "ListaGenerica.h"

using namespace std;

int main() {

    // Lista de enteros
    ListaGenerica<int> listaEnteros;

    listaEnteros.agregar(10);
    listaEnteros.agregar(5);
    listaEnteros.agregar(20);
    listaEnteros.agregar(3);

    cout << "LISTA DE ENTEROS" << endl;
    listaEnteros.mostrar();

    cout << "Buscando numero 10: ";

    if (listaEnteros.buscar(10)) {
        cout << "Listo" << endl;
    } else {
        cout << "No encontrado" << endl;
    }

    cout << "Eliminando numero 5..." << endl;
    listaEnteros.eliminar(5);

    cout << "Lista despues de eliminar:" << endl;
    listaEnteros.mostrar();

    cout << "Ordenando lista..." << endl;
    listaEnteros.ordenar();

    cout << "Lista ordenada:" << endl;
    listaEnteros.mostrar();


    // Lista numeros decimales
    ListaGenerica<double> listaDecimales;

    listaDecimales.agregar(4.5);
    listaDecimales.agregar(2.1);
    listaDecimales.agregar(8.7);
    listaDecimales.agregar(1.3);

    cout << "\nLISTA DE DECIMALES" << endl;
    listaDecimales.mostrar();

    cout << "Ordenando lista..." << endl;
    listaDecimales.ordenar();

    cout << "Lista ordenada:" << endl;
    listaDecimales.mostrar();


    // Lista caracteres
    ListaGenerica<char> listaCaracteres;

    listaCaracteres.agregar('Z');
    listaCaracteres.agregar('A');
    listaCaracteres.agregar('M');
    listaCaracteres.agregar('J');

    cout << "\nLISTA DE CARACTERES" << endl;
    listaCaracteres.mostrar();

    cout << "Ordenando lista..." << endl;
    listaCaracteres.ordenar();

    cout << "Lista ordenada:" << endl;
    listaCaracteres.mostrar();

    return 0;
}