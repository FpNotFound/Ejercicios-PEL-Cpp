#ifndef LISTAGENERICA_H
#define LISTAGENERICA_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class ListaGenerica {
private:
    vector<T> elementos;

public:

    // Agregar elemento
    void agregar(T elemento) {
        elementos.push_back(elemento);
    }

    // Eliminar elemento
    void eliminar(T elemento) {
        auto posicion = find(elementos.begin(), elementos.end(), elemento);

        if (posicion != elementos.end()) {
            elementos.erase(posicion);
            cout << "Elemento eliminado." << endl;
        } else {
            cout << "El elemento no se encuentra en la lista." << endl;
        }
    }

    // Buscar elemento
    bool buscar(T elemento) {
        auto posicion = find(elementos.begin(), elementos.end(), elemento);

        return posicion != elementos.end();
    }

    // Ordenar lista
    void ordenar() {
        sort(elementos.begin(), elementos.end());
    }

    // Mostrar lista
    void mostrar() {
        for (T elemento : elementos) {
            cout << elemento << " ";
        }

        cout << endl;
    }
};

#endif