#include <iostream>

/*
*   Ejercicio 47
*   
*   Probar un numero para determinar si es primo.
*   Imprimir PRIMO cuando lo sea y NO PRIMO cuando 
*   no sea el caso.
*
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    int num;
    cout << "---Numeros primos o no primos---";//Titulo
    cout << "\n\nIngrese un número:" << endl; //Input
    cin >> num;//Se almacena el valor ingresado
    
    bool primo = true;//Se declara true para tomar en cuenta el 1 en la comparacion de abajo
    for(int x = 2; x < num; x++){
        if(num % x == 0){
            primo = false;
        }
    }
    if(primo == true){
        cout << "\nEl número " << num << " es PRIMO.";
    }
    else{
        cout << "\nEl número " << num << " es NO PRIMO.";
    }
    return 0; 
}