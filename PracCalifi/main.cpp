#include <iostream>

using namespace std;
#include"PERSONA.h"
#include"BIRTHDAY.h"
int main()
{   BIRTHDAY d(1996,9,1);
    PERSONA P("PETER",d);
    P.prit();
    d.anio();
    return 0;
}
