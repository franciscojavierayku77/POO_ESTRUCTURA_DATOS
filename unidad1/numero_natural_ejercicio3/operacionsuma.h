#ifndef OPERACIONSUMA_H
#define OPERACIONSUMA_H

#include "operacioncentral.h"


class operacionsuma : public operacioncentral
{
    public:
        operacionsuma();

        int Getnumero1() { return numero1; }
        void Setnumero1(int val) { numero1 = val; }
        int Getnumero2() { return numero2; }
        void Setnumero2(int val) { numero2 = val; }

        float operaciones(int numero1,int numero2);

    protected:

    private:
        int numero1;
        int numero2;
};

#endif // OPERACIONSUMA_H
