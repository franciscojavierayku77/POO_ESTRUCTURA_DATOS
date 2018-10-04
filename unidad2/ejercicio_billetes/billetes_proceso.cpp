#include "billetes_proceso.h"
#include <iostream>
#include <string>

using namespace std;

billetes_proceso::billetes_proceso()
{
	//ctor
}
void billetes_proceso::Cambio(int n)
{
    if (n>=1000)
    {
        x = n/1000;//aqui se divide la variable entre 1000
        cout << x << " Billete(s) de 1000 pesos" << endl;//Imprime la cantidad de variables de 1000 que tiene
        Cambio(n%1000);//En este apartado saca el residuo de la variable y lo almacena en la variable para seguir con el programa
    }

    else
    {
        if (n>=500)
        {
            x = n/500;
            cout << x << " Billete(s) de 500 pesos" << endl;
            Cambio(n%500);
        }
        else
        {
            if (n>=200)
            {
                x = n/200;
                cout << x << " Billete(s) de 200 pesos" << endl;
                Cambio(n%200);
            }
            else
            {
                if (n>=100)
                {
                    x = n/100;
                    cout << x << " Billete(s) de 100 pesos" << endl;
                    Cambio(n%100);
                }
                else
                {
                    if (n>=50)
                    {
                        x = n/50;
                        cout << x << " Billete(s) de 50 pesos" << endl;
                        Cambio(n%50);
                    }
                    else
                    {
                        if (n>=20)
                        {
                            x = n/20;
                            cout << x << " Moneda(s) de 20 pesos" << endl;
                            Cambio(n%20);
                        }
                        else
                        {
                            if (n>=10)
                            {
                                x = n/10;
                                cout << x << " Moneda(s) de 10 pesos" << endl;
                                Cambio(n%10);
                            }
                            else
                            {
                                if (n>=5)
                                {
                                    x = n/5;
                                    cout << x << " Moneda(s) de 5 pesos" << endl;
                                    Cambio(n%5);
                                }
                                else
                                {
                                    if (n>=2)
                                    {
                                        x = n/2;
                                        cout << x << " Moneda(s) de 2 pesos" << endl;
                                        Cambio(n%2);
                                    }
                                    else
                                    {
                                        if (n>=1)
                                        {
                                            x = n/1;
                                            cout << x << " Moneda(s) de 1 peso" << endl;
                                            Cambio(n%1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

