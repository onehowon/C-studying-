#ifndef EXP_H
#define EXP_H
class Exp {
    int base, exp;
public:
    Exp();
    Exp(int b);
    Exp(int b, int e);
    int getValue(); // 지수를 정수로 계산하여 리턴
    int getBase(); // 베이스 값 리턴
    int getExp(); // 지수 값 리턴
    bool equals(Exp b); // 이 객체와 객체 b의 값이 같은지 판별하여 리턴
};
#endif