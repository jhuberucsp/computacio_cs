#ifndef VECTOR_H
#define VECTOR_H

#include "math.h"
#include "Point.h"

class Vector
{
    public:
        Point Star;
        Point End;
        void offset(double a,double b);
        void print();
        double LONGI();
};

#endif // VECTOR_H
