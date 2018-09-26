#include "operacionigual.h"
#include <iostream>

using namespace std;
operacionigual::operacionigual()
{
    //ctor
}
float operacionigual::operaciones(int a, int b){
   if (a==b)
    {cout<<a<<" es igual a : "<<b<<"\n";}
   else {cout<<a<<" no es igual a : "<<b<<"\n";};
}

