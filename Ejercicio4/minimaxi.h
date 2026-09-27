//
// Created by Mora on 24/09/2026.
//

#ifndef EJERCICIO_4_MINIMAXI_H
#define EJERCICIO_4_MINIMAXI_H

template <typename T>
T maxi (T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

template <typename T>
T mini (T a, T b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

#endif
