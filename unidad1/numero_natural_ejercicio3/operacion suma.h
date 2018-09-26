#ifndef OPERACION SUMA_H
#define OPERACION SUMA_H

#include <operacioncentral.h>


class operacion suma : public operacioncentral
{
    public:
        operacion suma();

        int Getnumero1() { return numero1; }
        void Setnumero1(int val) { numero1 = val; }
        int Getnumero2() { return numero2; }
        void Setnumero2(int val) { numero2 = val; }

    protected:

    private:
        int numero1;
        int numero2;
};

#endif // OPERACION SUMA_H
