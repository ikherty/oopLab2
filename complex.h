#ifndef COMPLEX_H
#define COMPLEX_H
#include "pair.h"

struct complex{
    double a, b;
};

class Complex: public pair{
    complex one, two;
public:
    Complex();
    void addition()override;
    void subtraction()override;
    void multiply()override;
    void division()override;
    void diff();
    void conjugate(Complex one);
};

#endif // COMPLEX_H
