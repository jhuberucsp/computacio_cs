#include "PERSONA.h"

PERSONA::PERSONA(string N, BIRTHDAY B):NAME(N),bd(B)
{
}

void PERSONA::prit(){
    cout<<NAME<<endl;}
void PERSONA::OFICIO(){
    cout<<"SIN EMPLEO"<<endl;}
