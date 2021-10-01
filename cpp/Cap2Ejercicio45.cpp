#include <iostream>
#include <cmath>

/*
*   Ejercicio 45
*   Calcular los valores de 2^2, 2^3, 2^4 y 2^5;
*   3^2, 3^3, 3^4 y 3^5; continuar asi hasta 9^2, 9^3, 9^4 y 9^5.
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    int numero = 2; //Numero con el que se indica que empiece la sucesion
    int potencia = 2;//Potencia con la que se indica que comience la sucesion
    int resultado;//Resultado del numero con la potencia ya aplicada

    do{
        cout << "\nPotencias de " << numero << endl;
        for(int x = 1; x <= 4; x++){
            resultado = pow(numero, potencia);//Calculo del resultado de la operacion
            cout << "\n" << numero << "^" << potencia << " = ";//Estructura del despliegue
            cout << resultado << endl;//Imprime el resultado de la operacion
            potencia++;//Aumenta el valor de la potencia
            if(potencia == 6){
                numero++;//Aumenta el valor del numero base cuando se llega a la potencia 5
                potencia = 2;//Se reasigna el valor de la potencia
            }  
        }
    }while(numero <= 9);

    return 0;
}