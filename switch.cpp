#include <iostream>
using namespace std;

int main() {
    int codigo;
    cout << "Ingrese codigo de area de Centroamerica: ";
    cin >> codigo;

    switch(codigo) {
        case 502:
            cout << "Guatemala" << endl;
            break;
        case 503:
            cout << "El Salvador" << endl;
            break;
        case 504:
            cout << "Honduras" << endl;
            break;
        case 505:
            cout << "Nicaragua" << endl;
            break;
        case 506:
            cout << "Costa Rica" << endl;
            break;
        case 507:
            cout << "Panama" << endl;
            break;
        default:
            // Se ejecuta si no coincide con ningún caso anterior
            cout << "Este codigo no es de Centroamerica" << endl;
            break;
    }

    return 0;
}
