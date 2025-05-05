#include <iostream>
using namespace std;

class AcumuladorDeNumeros {
    int arregloDeNumeros[10];
    int cantidadDeNumeros = 0;

public:
    void agregarNumero(int numero) {
        if (cantidadDeNumeros < 10) {
            arregloDeNumeros[cantidadDeNumeros++] = numero;
        }
    }

    int calcularSumaTotal() {
        int sumaTotal = 0;
        for (int indice = 0; indice < cantidadDeNumeros; ++indice) {
            sumaTotal += arregloDeNumeros[indice];
        }
        return sumaTotal;
    }

    double calcularPromedio() {
        if (cantidadDeNumeros == 0) {
            return 0.0;
        }
        return static_cast<double>(calcularSumaTotal()) / cantidadDeNumeros;
    }
};

int main() {
      setlocale(LC_ALL, "Spanish");

    AcumuladorDeNumeros acumulador;
    int cantidadAIngresar;

    cout << "¿Cuántos números desea ingresar? ";
    cin >> cantidadAIngresar;

    for (int contador = 0; contador < cantidadAIngresar; ++contador) {
        cout << "Ingrese un número: ";
        int numeroIngresado;
        cin >> numeroIngresado;
        acumulador.agregarNumero(numeroIngresado);
    }

    cout << "Suma total = " << acumulador.calcularSumaTotal() << '\n';
    cout << "Promedio   = " << acumulador.calcularPromedio() << '\n';

    return 0;
}
