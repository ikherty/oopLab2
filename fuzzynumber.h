#ifndef FUZZYNUMBER_H
#define FUZZYNUMBER_H
#include "pair.h"
/*
Нечеткое число описывается тройкой действительных чисел (X – e1 , X, X + e2),
где x – среднее значение числа, X – e1 – минимально допустимое значение,
X + e2 – максимально допустимое значение Реализовать класс для работы с нечеткими числами.
Операции над числами A = (A – a1, A, A + a2) и B = (B – b1, B, B + b2)
выполняются по следующим правилам:
· сложение: A + B = (A + B – a1 – b1, A + B, A + B + a2 + b2)
· вычитание: A – B = (A – B – a1 – b1, A – B, A – B + a2 + b2)
· умножение: A * B = (A*B – B*a1 – A*b1 + a1*b1, A*B, A*B + B*a1 + A*b1 + a1*b1)
· деление: A / B = ((A – a1) /(B + b1), A/B, (A + a1) / (B – b1)
· обратное число: 1 / B = (1 /(B + b1), 1/B, 1 / (B – b1)
*/
struct fuzzyNumber{
    double x, e1,e2;
};

class FuzzyNumber: public pair{
    fuzzyNumber a, b;
public:
    FuzzyNumber();
    void additional() /*override*/;
    void subtraction();
    void multiply();
    void division();
};

#endif // FUZZYNUMBER_H
