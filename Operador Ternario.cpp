#include <iostream>
#include <string>

using namespace std;

int main() {
    // Definición de variables
    float n1, n2, n3, promedio;
    string mensaje;

    // 1. Entrada de datos
    cout << "--- SISTEMA DE CALIFICACIONES ---" << endl;
    cout << "Ingrese nota 1: "; cin >> n1;
    cout << "Ingrese nota 2: "; cin >> n2;
    cout << "Ingrese nota 3: "; cin >> n3;

    // 2. Cálculo del promedio
    promedio = (n1 + n2 + n3) / 3;

    // 3. Uso del Operador Ternario (Explicado en el Video 3)
    // Estructura: (condicion) ? verdadero : falso
    mensaje = (promedio >= 61) ? "APROBADO" : "REPROBADO";

    // 4. Salida de resultados básicos
    cout << "\n================================" << endl;
    cout << "Su promedio es de: " << promedio << endl;
    cout << "Estado final: " << mensaje << endl;
    cout << "================================" << endl;

    // 5. Estructuras de control para rangos (Explicado en el Video 2 y 3)
    if (promedio >= 0 && promedio < 61) {
        cout << "Mensaje: El rendimiento fue insuficiente (Mala nota)." << endl;
    } 
    else if (promedio >= 61 && promedio <= 80) {
        cout << "Mensaje: Has cumplido satisfactoriamente (Buena nota)." << endl;
    } 
    else if (promedio > 80 && promedio <= 100) {
        cout << "Mensaje: Excelente desempeño académico (Excelente nota)." << endl;
    }
    else {
        cout << "Error: El promedio calculado no es valido." << endl;
    }

    return 0;
}
