#ifndef ANTECESOR_H
#define ANTECESOR_H

#include "operacioncentral.h"


class antecesor : public operacioncentral
{
    public:
        antecesor();

        int Getnumeroy() { return numeroy; }
        void Setnumeroy(int val) { numeroy = val; }

         float operaciones(int numeroy);

    protected:

    private:
        int numeroy;
};

#endif // ANTECESOR_H
