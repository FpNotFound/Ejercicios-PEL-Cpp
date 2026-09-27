#include <iostream>
#include "intercambio.h"

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "Antes del intercambio:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    intercambio(a, b);

    cout << "\nDespues del intercambio:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}