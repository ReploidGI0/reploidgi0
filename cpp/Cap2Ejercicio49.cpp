#include <iostream>

/*
*   Ejercicio 49
*
*   Ingresar varios valores de A y B para probar
*   la veracidad de la expresion
*
*       |A + B| + |A| + |B|
*
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    //float a;
    //float b;
    float a = -5;
    float b = 2;
    float resultado1;
    float resultado2;
    float resultado3;

    /*cout << "Introduce el valor de A: " << endl;
    cin >> a;
    cout << "Introduce el valor de B: " << endl;;
    cin >> b;*/

    resultado1 = abs(a+b);
    resultado2 = abs(a)+abs(b);
    resultado3 = (abs(a+b))+abs(a)+abs(b);

    cout << "\nValor A: " << a << endl;
    cout << "Valor B: " << b << endl;

    cout << "\n|A + B| = " << resultado1 << endl;
    cout << "\n|A| + |B| = " << resultado2 << endl;
    cout << "\n|A + B| + |A| + |B| = " << resultado3 << endl;
    cout << "\nEl resultado cambia dependiendo del signo que tenga el valor" << endl;

    return 0;
}