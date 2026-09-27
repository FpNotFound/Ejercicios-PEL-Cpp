//
// Created by Mora on 24/09/2026.
//

#ifndef EJERCICIO5_INTERCAMBIO_H
#define EJERCICIO5_INTERCAMBIO_H

template <typename T>
void intercambio(T &a, T &b) {
    T temporal = a;
    a = b;
    b = temporal;
}

#endif //EJERCICIO5_INTERCAMBIO_H
