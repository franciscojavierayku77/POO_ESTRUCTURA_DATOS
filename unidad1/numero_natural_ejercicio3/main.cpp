/*
AY KU FRANCISCO JAVIER
3"B" NUMEROS NATURALES OPERACIONES
TERCER PROGRAMA
ESTE PROGRAMA PROCESA USANDO LOS NUMEROS NATURALES LAS OPERACIONES PARA DETERMINAR SI DOS NUMEROS SON IGUALES
Y DECIR SI UNO ES MENOR O NO HAY MENOR, ADEMAS DETERMINAR LA DIFERENCIA Y SUMATORIA DE DOS NUMEROS ASI COMO
DETERMINAR EL NUMERO SUCESOR Y NUMERO ANTECESOR*/
#include <iostream>
#include "sucesornv.h"
#include "antecesor.h"
#include "operacionsuma.h"
#include "operacionigual.h"
#include "operacion0.h"
#include "operacionmenor.h"
#include "operaciondiferencia.h"
#include <stdlib.h>/*libreria para limpiar la pantalla despues de cada funcion ejecutada*/
using namespace std;

int main()
{
    int numerox,numeroy2, numero1,numero2,opcion,a,b;/*variables para ser usadas en cada funcion segun la
                                                       clase y opciones*/
    sucesornv suce;
    antecesor ante;
    operacionsuma sum;
    operaciondiferencia dif;
    operacionmenor men;
    operacionigual ig;
    /*las clases con una referacia para llamarlos y ejecturas su funcion en tonrno a las variables*/

    do {
        cout << "******NUMEROS NATURALES******\n";
        cout << "\nESOJA UNA OPCION\n\n1.SUCESOR \n2.ANTECESOR \n3.SUMA \n4.DIFERENCIA \n5.IGUAL Y DETERMINAR EL MENOR \n6.FINALIZAR PROGRAMA\n";
        cin >> opcion;
        system("cls");
        switch (opcion){
        case 1:
            cout << "escogistes el sucesor de un numero natural\n";
            cout << "escribe numero\n";
            cin >> numerox;
            if (numerox==0)/*condicion para la operacion cero*/
            {
                cout<< "Has introducido un cero la operacion no se puede realizar\n\n";
            }
            else
            cout << "el sucesor es:  = "<<suce.operaciones(numerox)<<"\n";/*se llama a la clase que realiza el calculo en torno
                                                                             a la variable y funcion en comun que es una operacion
                                                                             se ejecuta de diferente manera*/
            system("pause");//se usa la funcion de limpiar pantalla para cuando//
            system("cls"); /*se usa la funcion de limpiar pantalla para cuando se procese la funcion de la opcion*/
            break;
        case 2:
            cout << "******Escogistes el antecesor de un numero natural******\n";
            cout << "escribe numero\n";
            cin >> numeroy2;
             if (numeroy2==0)
            {
                cout<< "Has introducido un cero la operacion no se puede realizar\n\n";
            }
            else
            cout << "el antecesor es:  = "<<ante.operaciones(numeroy2)<<"\n";
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "******suma de dos numeros naturales******\n";
            cout << "escribe numero 1\n";
            cin >> numero1;
            cout << "escribe numero 2\n";
            cin >> numero2;
            cout << "la suma es: = " << sum.operaciones(numero1,numero2) << "\n";
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "******diferencia de dos numeros naturales******\n\n";
            cout << "escribe numero 1\n";
            cin >> numero1;
            cout << "escribe numero 2\n";
            cin >> numero2;
            cout << "La diferencia de los numeros naturales es: = " << dif.operaciones(numero1, numero2) << "\n";
            system("pause");
            system("cls");
            break;
        case 5:
            cout << "*************el numero igual Y determinacion de menor***********\n";
            cout << "primer numero\n";
            cin >> a;
            cout << "segundo numero\n";
            cin >> b;
            ig.operaciones(a,b);
            men.operaciones(a,b);
            system("pause");
            system("cls");
            break;
        case 6:
            cout <<"******************FIN DEL PROGRAMA******************\n*********PRESIONE CUALQUIER TECLA PARA CONTINUAR*********";
            break;
        default :
            cout << "\n*********************NO ES VALIDO LA OPCION***************\n/////////////Escoge el numero ingresado en el programa///////////////\n\n";
            system("pause");
            system("cls");
            break;
        }
    }while (opcion<6 || opcion>6);/*funcion para ciclar las operaciones hasta que el usuario quiera finalizar*/
    return 0;
}



