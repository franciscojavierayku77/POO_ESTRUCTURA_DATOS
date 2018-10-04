#include "palindromo_operacion.h"
#include <iostream>
#include <string.h>
using namespace std;
palindromo_operacion::palindromo_operacion()
{
	//ctor
}

void palindromo_operacion::generaexacto(char frasepura[], int medida, string palabracompleta) //genera un arreglo de medida igual a la del arreglo original menos los espacios, esto para tener la palabra de corrido y hacer una comparacion mas sencilla
{
    int j = 0;
    int x = 0;

    for (int i = 0; i<= medida; i++)//llenado del arreglo corrido
    {
        if (palabracompleta[i] == ' ')//si encuentra un espacio, no pasar ningun dato y no brincar de casilla
        {
            x++;
        }
        else//en caso contrario, pasar la letra a la posicion corrida del arreglo
        {
            frasepura[j] = palabracompleta[i];
            j++;
        }
    }
}

bool palindromo_operacion::decision(char frasepura[], int ini, int fin) //decidir si es palindromo
{
    if (ini == fin)//caso base, si las comparaciones llegan a la mitad de la palabra, todas las anteriores han sido confirmadas, sacar un verdadero
    {
        return true;
    }
    if (frasepura [ini] == frasepura [fin])//confirmacion de letras//
    {
        palindromo_operacion::decision(frasepura, ini+1, fin-1);//si la posici�n actual es confirmada, confirmar las siguientes, se vuelve a invocar con valores cada vez mas cercanos al centro de la palabra
    }
    else
    {
        return false;//si alguno de los pares de letras comparadas no son iguales, la palabra no seria palindromo, regresar falso y terminar la comparacion
    }
}
