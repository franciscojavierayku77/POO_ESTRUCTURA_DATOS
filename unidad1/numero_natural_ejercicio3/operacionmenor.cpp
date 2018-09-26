#include "operacionmenor.h"
#include <iostream>

using namespace std;
operacionmenor::operacionmenor()
{
    //ctor
}
float operacionmenor::operaciones(int a, int b){
   if (a<b)
    {cout<<"El menor es: "<<a<<"\n";}
   else
    if (a==b)
    {cout<<"No hay menor, los numeros son iguales"<<"\n";}
    else
   {cout<<"Rl menor es: "<<b<<"\n";};
}
