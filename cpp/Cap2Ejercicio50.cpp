#include <iostream>

/*
*   Ejercicio 50
*   Resolver una ecuación de valor absoluto
*   de la forma |X-A| = B, donde A y B sean numeros reales.
*
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    float A=-2; 
    float B=3;
    float valorX=5;
    cout << "ECUACIÓN A RESOLVER" << endl;
    cout << "|" << valorX << "x"<< A << "|="<< B << endl;
    cout << "|w| = a" << endl;

    for(int i = 1; i <= 2; i++){
        if(i == 1){
            cout << "\nPrimer solución" << endl;
            A = abs(A);//Se hace valor absoluto a A por que esta dentro de los simbolos
            B=-3;
            valorX = abs(valorX);

            cout << "w = -a\n" << endl;
            cout << valorX << "x-" << A << "=" << B << endl;
            cout << valorX << "x=" << A+B << endl;
            cout << "x=" << (A+B)/valorX << endl;
        }
        if(i == 2){
            cout << "\nSegunda solución" << endl;
            A = abs(A);//Se hace valor absoluto a A por que esta dentro de los simbolos
            B=3;
            valorX = abs(valorX);

            cout << "w = a\n" << endl;
            cout << valorX << "x-" << A << "=" << B << endl;
            cout << valorX << "x=" << A+B << endl;
            cout << "x=" << (A+B)/valorX << endl;
        }
    }
    return 0;
}