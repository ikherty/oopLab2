#ifndef FUZZYNUMBER_H
#define FUZZYNUMBER_H
#include "pair.h"

struct fuzzyNumber{
    double x, e1,e2;
};

class FuzzyNumber: public pair{
    fuzzyNumber a, b;
public:
    FuzzyNumber();
    void addition();
    void subtraction();
    void multiply();
    void division();
    void redivision(fuzzyNumber b);
};

#endif // FUZZYNUMBER_H
