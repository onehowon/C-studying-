// 소스코드
#include <iostream>
using namespace std;

#include "Exp.h"

int main(){
    Exp a(3, 2); // 3^2 = 9, 베이스3, 지수2
    Exp b(9);
    Exp c;

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ',' << a.getExp() << endl;

    if(a.equals(b))
        cout << "same" << endl;
    else
        cout << "not same" << endl;
}

//Exp_H
#ifndef EXP_H
#define EXP_H

class Exp{
    int Base;
    int exp;
public:
    Exp();
    Exp(int x);
    Exp(int x, int y);
    int getBase();
    int getValue();
    int getExp();
    bool equals(Exp ex);
};

#endif EXP_H

//EXP cpp file

#include "Exp.h"

Exp::Exp(){
    Base = 1;
    exp = 1;
}

Exp::Exp(int x){
    Base = x;
    exp = 1;
}

Exp::Exp(int x, int y){
    Base = x;
    exp = y;
}

int Exp::getBase(){
    return Base;
}

int Exp::getValue(){
    int value = 1;
    for(int i=0; i<exp; i++){
        value*=Base;
    }
    return value;
}
int Exp::getExp(){
    return exp;
}

bool Exp::equals(Exp ex){
    if (getValue() == ex.getValue())
        return 1;
    else
        return 0;
}