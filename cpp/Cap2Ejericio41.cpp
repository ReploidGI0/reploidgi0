41.Si dos ciudaddes están a 80 km una de otra
y usted conduce a 90km/h ¿Cuántos minutos
necesitará para ir de una ciudad a otra?

#include <iostream>

/*  
*    Ejercicio 41
*
*    Si dos ciudaddes están a 80 km una de otra
*    y usted conduce a 90km/h. 
*
*    ¿Cuántos minutos necesitará para ir de una ciudad a otra?
*
*/

//@Author ReploidGI0
//@Date 15 Sept 2021

using namespace std;

int main() {
    float tiempohrs = 0.0;
    float tiempomin = 0.0;
    float distancia = 80.0; //80km
    float velocidad = 90.0; //90km/h

    cout << "---Problema de distancia entre 2 ciudades---" << endl;

    tiempohrs = distancia/velocidad; //t = d/v
    cout << "\nSe necesita " << tiempohrs << " horas para llegar a la ciudad." << endl;

    tiempomin = tiempohrs*60;
    cout << "\nSe tarda " << tiempomin << " minutos para llegar a la ciudad." << endl;

    return 0;
}