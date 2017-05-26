#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include<iostream>
using namespace std;

class BIRTHDAY
{
    public:
        BIRTHDAY(int A,int M,int D);
        //virtual ~BIRTHDAY();
        virtual void anio();
        //virtual ~anio();
    public:
    int ANIO;
    int MES;
    int DIA;
};

#endif // BIRTHDAY_H
