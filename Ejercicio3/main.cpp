#include <iostream>
#include "CuentaBancaria.h"

using namespace std;

int main() {

    CuentaBancaria cuenta1("123456789", "Mariana", 1000);

    cout << "INFORMACION INICIAL" << endl;
    cout << "------------------------" << endl;
    cout << "Titular: Mariana" << endl;
    cout << "Numero de cuenta: 888888888" << endl;
    cuenta1.consultarSaldo();

    cout << endl;

    cout << "DEPOSITO" << endl;
    cout << "------------------------" << endl;
    cuenta1.depositar(500);
    cuenta1.consultarSaldo();

    cout << endl;

    cout << "RETIRO" << endl;
    cout << "------------------------" << endl;
    cuenta1.retirar(300);
    cuenta1.consultarSaldo();

    cout << endl;

    cout << "RETIRO EXCESIVO" << endl;
    cout << "------------------------" << endl;
    cuenta1.retirar(2000);
    cuenta1.consultarSaldo();

    return 0;
}