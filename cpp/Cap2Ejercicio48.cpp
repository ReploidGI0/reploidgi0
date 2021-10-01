#include <iostream>

/*
*   Ejercicio 48
*
*   Calcular el valor absoluto de un número.
*   Usar la función de valor absoluto.
*
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    float num;
    float resultado;

    cout << "Ingrese un número: " << endl;//Input
    cin >> num;//Guardar el valor ingresado

    resultado = abs(num);

    cout << "\nEl valor absoluto de " << num << " es: " << resultado << endl;
    return 0;
}