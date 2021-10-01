#include <iostream>

/*
*   Ejercicio 46
*
*   Cambiar el decimal periódico a fracción
*   racional de la forma M/N, donde M y N sean enteros.
*
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

void decimalFraccion(float num);
void decimalFraccion(float num){
    float n = 1; 
    float m = 1; 
    float varaux = 1;

    while(!(varaux == num)){
        varaux = m/n;
        if(varaux<num){
            m++;//Aumenta numerador
        }
        else if(varaux>num){
            m--;//Decrementa numerador
            n++;//Incrementa denominador
        }
    }
    cout << "\nLa fracción del número " << num << " es: " << m << "/" << n << endl;
}

int main() {
    float num;
    cout << "---Convertidor de números decimales a fracción---" << endl;
    cout << "\nIngresa un número decimal: "; //Input
    cin >> num; //Se almacena el numero ingresado
    decimalFraccion(num); //Se manda el parámetro a la función
    return 0;
}