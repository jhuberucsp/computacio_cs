#include "Vector.h"
#include "Point.h"

void Vector::offset(double a, double b)
{
    Star.x+=a;
    Star.y+=b;
    End.x+=a;
    End.y+=b;

}

void Vector::print()
{
    Star.print();
    std::cout<<" * ";
    End.print();

}

double Vector::LONGI()
{
    double temp=(Star.x)-(End.x);
    double temp2=(Star.y)-(End.y);
    double c=pow(temp,2.0)+pow(temp2,2.0);
    return sqrt(c);

}

