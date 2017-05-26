#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include"BIRTHDAY.h"
using namespace std;
class PERSONA
{
    public:

        PERSONA(string N,BIRTHDAY B);
        //virtual ~PERSONA();
        virtual void prit();
        virtual void OFICIO();

    protected:
        string NAME;
        BIRTHDAY bd;

};

#endif // PERSONA_H
