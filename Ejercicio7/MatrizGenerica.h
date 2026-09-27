#ifndef MATRIZGENERICA_H
#define MATRIZGENERICA_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class MatrizGenerica {
private:
    int filas;
    int columnas;
    vector<vector<T>> matriz;

public:

    // Constructor
    MatrizGenerica(int filas, int columnas) {
        this->filas = filas;
        this->columnas = columnas;

        matriz.resize(filas, vector<T>(columnas));
    }

    // Inicializar matriz
    void inicializar(T valor) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                matriz[i][j] = valor;
            }
        }
    }

    // Asignar valor a una posición
    void asignar(int fila, int columna, T valor) {
        matriz[fila][columna] = valor;
    }

    // Obtener valor
    T obtener(int fila, int columna) {
        return matriz[fila][columna];
    }

    // Mostrar matriz
    void mostrar() {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cout << matriz[i][j] << "\t";
            }

            cout << endl;
        }
    }

    // Sumar dos matrices
    MatrizGenerica<T> sumar(const MatrizGenerica<T>& otra) {

        MatrizGenerica<T> resultado(filas, columnas);

        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado.matriz[i][j] =
                    matriz[i][j] + otra.matriz[i][j];
            }
        }

        return resultado;
    }

    // Multiplicar dos matrices
    MatrizGenerica<T> multiplicar(const MatrizGenerica<T>& otra) {

        MatrizGenerica<T> resultado(filas, otra.columnas);

        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < otra.columnas; j++) {

                resultado.matriz[i][j] = 0;

                for (int k = 0; k < columnas; k++) {
                    resultado.matriz[i][j] +=
                        matriz[i][k] * otra.matriz[k][j];
                }
            }
        }

        return resultado;
    }
};

#endif