#include <iostream>

/*
*   Ejercicio 51
*
*   Desplegar en pantalla los elementos de la función definida
*   por f(x) = |x|, para x = -8, -7, -6,..., +7, +8
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {

    cout << "---Desplegar elementos de una función definida---" << endl;
    cout << "\nFunción definida f(x) = |x| evaluada de [-8, 8]\n" << endl;

    for(int x = -8; x <= 8; x++){ //Ciclo para evaluar los valores de x
        cout << "f("<<x<<") = ";
        cout << abs(x) << endl;
    }
    return 0;
}