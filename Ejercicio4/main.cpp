#include <iostream>
#include "minimaxi.h"

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "Valor mayor: " << maxi(a, b) << endl;
    cout << "Valor menor: " << mini(a, b) << endl;

    double x = 5.5;
    double y = 8.2;

    cout << "Valor mayor: " << maxi(x, y) << endl;
    cout << "Valor menor: " << mini(x, y) << endl;

    return 0;
}