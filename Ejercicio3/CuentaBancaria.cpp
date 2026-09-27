#include "CuentaBancaria.h"
#include <iostream>

using namespace std;

CuentaBancaria::CuentaBancaria(string numeroCuenta, string titular, double saldoInicial) {
    this->numeroCuenta = numeroCuenta;
    this->titular = titular;
    this->saldo = saldoInicial;
}

void CuentaBancaria::depositar(double cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
        cout << "Se depositaron $" << cantidad << endl;
    } else {
        cout << "La cantidad debe ser mayor que 0." << endl;
    }
}

void CuentaBancaria::retirar(double cantidad) {
    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
    }
    else if (cantidad <= saldo) {
        saldo -= cantidad;
        cout << "Se retiraron $" << cantidad << endl;
    }
    else {
        cout << "No hay suficiente saldo." << endl;
    }
}

void CuentaBancaria::consultarSaldo() {
    cout << "Saldo actual: $" << saldo << endl;
}