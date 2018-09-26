#include "juego.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
using namespace std;

juego::juego()
{
    //ctor
}

juego::~juego()
{
    //dtor
}

int juego::numaleatorio()
{
    int num;
    srand(time(NULL));
    num = 1 + rand() % (11 - 1);
    return num;
}
void juego::gamestart(char x [], int medida)
{
    char muestra [medida];
    char asterisco [] = "*";
    int restavidas = 0;
    int vidas = 0;
    int seguir = 1;
    int ganar = 0;
    for (int a = 0; a < medida; a++)
    {
        muestra [a] = asterisco [0];
    };

    char letra;

    while ((vidas < 5)&&(seguir > 0))
    {
        for (int a = 0; a < medida; a++)
        {
            cout << muestra [a];
        }
        cout << "\n";
        cout << "introduzca una letra: ";
        cin >> letra;

        for (int a = 0; a < medida; a++)
        {
            if (letra == x[a])
            {
                muestra [a] = letra;
            }
            else
            {
                restavidas++;

            }
        }
        if (restavidas < (medida))
        {
            cout << "Le atinaste!\n";
            restavidas = 0;
        }
        else
        {
            if (vidas < 5)
            {
                cout << "Esa letra no esta, intenta de nuevo!\n";
            }
            vidas++;
            restavidas=0;
        }
        for (int a = 0; a < medida; a++)
        {
            if (muestra[a] == asterisco[0])
            {
                ganar = 0;
            }
            else
            {
                ganar++;
            }
        }
        if (ganar == medida)
        {
            seguir = 0;
        }
        else
        {
            ganar = 0;
        }
    }
    if ((vidas == 5))
    {
        cout << "Has agotado tus vidas, se acabó el juego!\n";
    }
    else
    {
        cout << "Felicidades, ganaste!\n";
    }

};








