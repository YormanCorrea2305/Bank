#include <iostream>
#include "Banco.h"
using namespace std;

int main() {
    Banco banco;
    int opcion;
    do {
        cout << "\nMenu de opciones:" << endl;
        cout << "1. Crear Cliente" << endl;
        cout << "2. Crear Cuenta" << endl;
        cout << "3. Agregar Cliente a Cuenta" << endl;
        cout << "4. Consignar" << endl;
        cout << "5. Retirar" << endl;
        cout << "6. Mostrar Informe" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int id, telefono;
            string nombre;
            cout << "Ingrese ID: "; cin >> id;
            cout << "Ingrese Nombre: "; cin >> nombre;
            cout << "Ingrese Telefono: "; cin >> telefono;
            banco.crearCliente(id, nombre, telefono);
        } else if (opcion == 2) {
            int numeroCuenta;
            double saldoInicial;
            cout << "Ingrese Numero de Cuenta: "; cin >> numeroCuenta;
            cout << "Ingrese Saldo Inicial: "; cin >> saldoInicial;
            banco.crearCuenta(numeroCuenta, saldoInicial);
        } else if (opcion == 3) {
            int numeroCuenta, idCliente;
            cout << "Ingrese Numero de Cuenta: "; cin >> numeroCuenta;
            cout << "Ingrese ID del Cliente: "; cin >> idCliente;
            Cuenta* cuenta = banco.buscarCuenta(numeroCuenta);
            Cliente* cliente = banco.buscarCliente(idCliente);
            if (cuenta && cliente) {
                cuenta->agregarCliente(cliente);
            } else {
                cout << "Cuenta o Cliente no encontrado." << endl;
            }
        } else if (opcion == 4) {
            int numeroCuenta;
            double cantidad;
            cout << "Ingrese Numero de Cuenta: "; cin >> numeroCuenta;
            cout << "Ingrese Cantidad a Consignar: "; cin >> cantidad;
            Cuenta* cuenta = banco.buscarCuenta(numeroCuenta);
            if (cuenta) {
                cuenta->consignar(cantidad);
            } else {
                cout << "Cuenta no encontrada." << endl;
            }
        } else if (opcion == 5) {
            int numeroCuenta;
            double cantidad;
            cout << "Ingrese Numero de Cuenta: "; cin >> numeroCuenta;
            cout << "Ingrese Cantidad a Retirar: "; cin >> cantidad;
            Cuenta* cuenta = banco.buscarCuenta(numeroCuenta);
            if (cuenta) {
                cuenta->retirar(cantidad);
            } else {
                cout << "Cuenta no encontrada." << endl;
            }
        } else if (opcion == 6) {
            banco.mostrarInforme();
        }
    } while (opcion != 7);

    return 0;
}
