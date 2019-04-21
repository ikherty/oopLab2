#include "fuzzynumber.h"
#include "pair.h"
FuzzyNumber::FuzzyNumber(){
    fuzzyNumber a, b;
    std::cin>>a.e1; this->a.e1=a.e1;
    std::cin>>a.x; this->a.e1=a.x;
    std::cin>>a.e2; this->a.e1=a.e2;
    std::cin>>b.e1; this->a.e1=b.e1;
    std::cin>>b.x; this->a.e1=b.x;
    std::cin>>b.e2; this->a.e1=b.e2;
}

void FuzzyNumber::addition(){
    double resulte1=a.x+b.x-a.e1-b.e1;
    double resultx=a.x+b.x;
    double resulte2=a.x+b.x+a.e2+b.e2;
    std::cout<<"А+В=("<<resulte1<<", "<<resultx<<", "<<resulte2<<")."<<std::endl;
}
void FuzzyNumber::subtraction(){
    double resulte1=a.x-b.x-a.e1-b.e1;
    double resultx=a.x-b.x;
    double resulte2=a.x-b.x+a.e2+b.e2;
    std::cout<<"А-В=("<<resulte1<<", "<<resultx<<", "<<resulte2<<")."<<std::endl;
}
void FuzzyNumber::multiply(){
    double resulte1=a.x*b.x-b.x*a.e1-a.x*b.e1+a.e1*b.e1;
    double resultx=a.x*b.x;
    double resulte2=a.x*b.x+b.x*a.e1+a.x*b.e1+a.e1*b.e1;
    std::cout<<"А*В=("<<resulte1<<", "<<resultx<<", "<<resulte2<<")."<<std::endl;
}
void FuzzyNumber::division(){
    double resulte1=((a.x-a.e1)/(b.x+b.e1));
    double resultx=a.x/b.x;
    double resulte2=((a.x+a.e1)/(b.x-b.e1));
    std::cout<<"А/В=("<<resulte1<<", "<<resultx<<", "<<resulte2<<")."<<std::endl;
}

void FuzzyNumber::redivision(fuzzyNumber b){
    double resulte1=1/(b.x+b.e1);
    double resultx=1/b.x;
    double resulte2=1/(b.x-b.e1);
    std::cout<<"1/В=("<<resulte1<<", "<<resultx<<", "<<resulte2<<")."<<std::endl;
}
