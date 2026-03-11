#include <iostream>
using namespace std;

int main() {
    char lapiz, lapicero, cuaderno;

    cout << "Trae lapiz? (s/n): "; cin >> lapiz;
    cout << "Trae lapicero? (s/n): "; cin >> lapicero;
    cout << "Trae cuaderno? (s/n): "; cin >> cuaderno;

    // Condición combinada: (Lapiz O Lapicero) Y obligatoriamente Cuaderno
    if ((lapiz == 's' || lapicero == 's') && cuaderno == 's') {
        cout << "Ingresa a la clase" << endl;
    } else {
        cout << "Lo siento, no puede ingresar" << endl;
    }

    return 0;
}
