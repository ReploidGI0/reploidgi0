#include <iostream>
#include <cmath>

/*
*   Ejercicio 42
*   
*   Una liga de Futbol Internacional arranca
*   en competencia directa con la Liga Nacional 
*   de Futbol. Usted adquiere una exención en la 
*   asociación formada recientemente y se le informa
*   que su ganancia puede proyectarse para los 8
*   años próximos mediante la fórmula
*
*   p = t^3 - 5t^2 + 10t - 51
*
*   (p representa su ganancia y t el tiempo en años)
*
*   En t = 0, cuando se compra la exención, p = 51.
*   El costo de su excención es por lo tanto de $51,000,
*   que es una ganancia negativa, lo que significa una pérdida.
*   Determinar su ganancia o pérdida total para los 
*   8 años acumulativos.
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    float p = 0;
    float acum = 0;

    cout << "---Liga Nacional de Futbol---" << endl;
    cout << "---Costo de excenciones---" << endl;

    for (int t = 0; t <= 8; t++){
        p = (pow(t,3)-(5*pow(t,2))+(10*t)-(51))*1000;
        if(p < 0){
            cout << "\nLa perdida del año " << t << " es: $" << p << endl;
        }
        else {
            cout << "\nLa ganancia del año " << t << " es: $" << p << endl;
        }
        acum +=p;
        //cout << "La ganancia o perdida de el año " << t << " es: " << p << endl;
    }
    cout << "\nAcumulado de 8 años: $" << acum << endl;
    return 0;
}