#include <iostream>
#include <cmath>

/*
*   Ejercicio 44
*   Calcular la potencia de una potencia;
*   es decir (a^m)^n, donde a = 20, m = 3, n = 2.
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    int a = 20;//Numero base
    int m = 3;//Primer potencia
    int n = 2;//Segunda potencia

    int potfin = n * m;//Las potencias se multiplican
    int res = pow(a,potfin);//Se calcula el resultado 

    cout << "El resultado de (20^3)^2 es: " << res << endl;
    return 0;
}