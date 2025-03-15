#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>
using namespace std;

class Cuenta
{
private:
    int numCuenta;
    double saldo;

public:
    Cuenta();
    Cuenta(int, double);
    double getSaldo() const;
    void deposito(double);
    void retiro(double);
};

#endif // CUENTA_H
