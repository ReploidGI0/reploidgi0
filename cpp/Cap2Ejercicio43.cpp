#include <iostream>
#include <cmath>

/*
*   Ejercio 43
*   El atleta estrella de la Escuela Secundaria
*   de Medio Oeste lanza una pelota de futbol, de 
*   beisbol y una medicinal hacia arriba. Una
*   función cuadrática da la altura en metros respecto
*   al tiempo en segundos como sigue:
*
*   Futbol: f(t) = -16t^2 + 43t + 8
*   Beisbol: b(t) = -16t^2 + 100t + 12.5
*   Pelota medicinal: m(t) = -16t^2 + 1.5t + 2
*
*   Desplegar el tiempo t en segundos y la altura de
*   cada pelota despues de t segundos, donde t es
*   un entero entre 0 y 10 inclusive.
*
*/

//@Author ReploidGI0
//@Date 17 Sept 2021

using namespace std;

int main() {
    float futbol = 0;
    float beisbol = 0;
    float medicinal = 0;

    cout << "---Problema de la pelota lanzada hacia arriba---" << endl;
    cout << "Cuando el valor sea mucho menor a cero se considera" << endl;
    cout << "que la pelota cayó, cae mas rapido debido a la \nfuerza de gravedad" << endl;

    cout << "\nPelota de Futbol lanzada hacia arriba \n";
    for(int t = 0; t <= 10; t++){
        futbol = ((-16*pow(t,2))+(43*t)+8);
        cout << "En " << t << " segundos tiene una altura de: " << futbol << " metros"<< endl;
    }
    cout << "\nPelota de Beisbol lanzada hacia arriba \n";
    for(int t = 0; t <= 10; t++){
        beisbol = ((-16*pow(t,2))+(100*t)+12.5);
        cout << "En " << t << " segundos tiene una altura de: " << beisbol << " metros"<< endl;
    }
    cout << "\nPelota Medicinal lanzada hacia arriba \n";
    for(int t = 0; t <= 10; t++){
        medicinal = ((-16*pow(t,2))+(1.5*t)+2);
        cout << "En " << t << " segundos tiene una altura de: " << medicinal << " metros"<< endl;
    }
    return 0;
}