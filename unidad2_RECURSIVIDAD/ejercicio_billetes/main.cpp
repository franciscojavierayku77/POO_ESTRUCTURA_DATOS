#include <iostream>
/*ejercicio Numero 3
  FRANCISCO JAVIER AY KU
  Este programa realiza la resta de venta y pago del producto usando una funcion para dar el cambio en cierta cantidad de billetes*/
#include <string>
#include "billetes_proceso.h"

using namespace std;

int main()
{
    int compra, pago, cam;
    billetes_proceso b;
    cout << "ejercicio_billetes" << endl;
    cout << "¿cuanto es el precio de la compra?: ";
    cin >> compra;//Aqui se solicita el precio total de la compra
    cout << "\n¿cuanto es el monto de pago?: ";
    cin >> pago;//Aqui se solicita el pago para saldar la compra
    cam = pago - compra;
    while (cam < 0)
    {
        cout << "\nEl pago debe ser mayor que la compra, proporcione el pago nuevamente: ";
        cin >> pago;
        cam = pago - compra;
    }
    cout << "Su cambio es: " << cam << endl << endl;
    b.Cambio(cam);//Aqui se llama la funcion billetes

    return 0;
}
