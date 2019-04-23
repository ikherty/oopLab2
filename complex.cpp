#include "complex.h"
#include "pair.h"

Complex::Complex(){
    complex one, two;
    std::cin>>one.a; this->one.a=one.a;
    std::cin>>one.b; this->one.b=one.b;
    std::cin>>two.a; this->two.a=one.a;
    std::cin>>two.b; this->two.b=one.b;
}

void Complex::addition(){
    double resultab=one.a+two.a;
    double resultcd=one.b+two.b;
    std::cout<<"(a,b)+(c,d)=("<<resultab<<", "<<resultcd<<")."<<std::endl;
}

void Complex::subtraction(){
    double resultab=one.a-two.a;
    double resultcd=one.b-two.b;
    std::cout<<"(a,b)-(c,d)=("<<resultab<<", "<<resultcd<<")."<<std::endl;
}

void Complex::multiply(){
    double resultab=one.a*two.a-one.b*two.b;
    double resultcd=one.a*two.b+one.b*two.a;
    std::cout<<"(a,b)*(c,d)=("<<resultab<<", "<<resultcd<<")."<<std::endl;
}

void Complex::division(){
    double resultab=(one.a*two.a+one.b*two.b)/(two.a*two.a+two.b*two.b);
    double resultcd=(one.a*two.b-one.b*two.a)/(two.a*two.a+two.b*two.b);
    std::cout<<"(a,b)/(c,d)=("<<resultab<<", "<<resultcd<<")."<<std::endl;
}

void Complex::diff(){
    if((one.a==two.a)&&(one.b==two.b))
        std::cout<<"А=В."<<std::endl;
}

void Complex::conjugate(complex one){
    std::cout<<"conj(a,b)=("<<one.a<<", "<<-one.b<<")."<<std::endl;
}
