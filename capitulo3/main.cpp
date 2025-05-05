#include <iostream>
using namespace std;

class B {
    int a[10];
    int i = 0;

public:
    void x(int v) {
        if (i < 10) {
            a[i++] = v;
        }
    }

    int y() {
        return sumar();
    }

    double z() {
        return i == 0 ? 0.0 : static_cast<double>(y()) / i;
    }

private:
    int sumar() {
        int s = 0;
        for (int j = 0; j < i; ++j) {
            s += a[j];
        }
        return s;
    }
};

void pedirDatos(B& p, int t) {
    for (int k = 0; k < t; ++k) {
        cout << "Número: ";
        int d;
        cin >> d;
        p.x(d);
    }
}

void mostrarResultados(B& p) {
    cout << "Suma = " << p.y() << '\n';
    cout << "Promedio = " << p.z() << '\n';
}

int main() {
      setlocale(LC_ALL, "Spanish");

    B p;
    int t;

    cout << "¿Cuántos números ingresará? ";
    cin >> t;

    pedirDatos(p, t);
    mostrarResultados(p);

    return 0;
}
