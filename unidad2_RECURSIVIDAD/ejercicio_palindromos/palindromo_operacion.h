#ifndef PALINDROMO_OPERACION_H
#define PALINDROMO_OPERACION_H
#include <iostream>
#include <string.h>
using namespace std;

class palindromo_operacion
{
    public:
        palindromo_operacion();

        void generaexacto(char frasepura[], int medida, string palabracompleta);
        bool decision (char frasepura[], int ini, int fin);

    protected:

    private:
};


#endif // PALINDROMO_OPERACION_H
