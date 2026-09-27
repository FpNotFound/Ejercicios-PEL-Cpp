#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>

using namespace std;

class CuentaBancaria {
private:
    string numeroCuenta;
    double saldo;
    string titular;

public:
    CuentaBancaria(string numeroCuenta, string titular, double saldoInicial);

    void depositar(double cantidad);
    void retirar(double cantidad);
    void consultarSaldo();
};

#endif