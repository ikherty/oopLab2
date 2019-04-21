#ifndef COMPLEX_H
#define COMPLEX_H
#include "pair.h"

struct complex{
    int a;
    double b;
};

class Complex: public pair{
    complex one, two;
public:
    Complex();
    void addition();
    void subtraction();
    void multiply();
    void division();
    void diff();
    void conjugate(Complex one);
};

#endif // COMPLEX_H
