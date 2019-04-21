#ifndef COMPLEX_H
#define COMPLEX_H
#include "pair.h"
/*
Комплексное число представляется парой действительных чисел (a, b), где a – действительная часть,
b – мнимая часть. Реализовать класс для работы с комплексными числами.
Обязательно должны присутсвовать операции:
· сложение: (a,b) + (c,d) = (a + b, c + d)
· вычитание: (a,b) – (c,d) = (a – b, c – d)
· умножение: (a,b) * (c,d) = (aс – bd, ad + bc)
· деление: (a,b) / (c,d) = (aс + bd, ad – bc) / (cc + dd)
· сравнение: (a,b) == (c,d) если (a == с) и (d == b)
· сопряженное число: conj(a,b) = (a, - b)
*/
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
};

#endif // COMPLEX_H
