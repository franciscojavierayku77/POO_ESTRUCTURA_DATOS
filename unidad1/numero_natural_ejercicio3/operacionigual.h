#ifndef OPERACIONIGUAL_H
#define OPERACIONIGUAL_H

#include "operacioncentral.h"


class operacionigual : public operacioncentral
{
    public:
        operacionigual();

        int Geta() { return a; }
        void Seta(int val) { a = val; }
        int Getb() { return b; }
        void Setb(int val) { b = val; }
        float operaciones(int a, int b);

    protected:

    private:
        int a;
        int b;
};

#endif // OPERACIONIGUAL_H
