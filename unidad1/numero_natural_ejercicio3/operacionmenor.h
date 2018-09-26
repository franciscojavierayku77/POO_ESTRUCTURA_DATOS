#ifndef OPERACIONMENOR_H
#define OPERACIONMENOR_H

#include "operacioncentral.h"


class operacionmenor : public operacioncentral
{
    public:
        operacionmenor();

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

#endif // OPERACIONMENOR_H
