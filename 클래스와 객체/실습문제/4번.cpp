// CoffeeMachine 클래스 생성
// 어떤 멤버 변수와 어떤 멤버 함수가 필요한지 판단하기

#include <iostream>
using namespace std;

class CoffeeMachine{
private:
    int coff, wat, sug; // 커피, 물, 설탕의 멤버 변수
public:
    CoffeeMachine(int _coff, int _wat, int _sug);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill(); // 물, 커피, 설탕 다 채우기 default = 10
    void show();
};

CoffeeMachine::CoffeeMachine(int _coff, int _wat, int _sug){
    coff = _coff;
    wat = _wat;
    sug = _sug;

}

void CoffeeMachine::drinkEspresso(){
    coff--;
    wat--;
}

void CoffeeMachine::drinkAmericano(){
    coff--;
    wat--, wat--;
}

void CoffeeMachine::drinkSugarCoffee(){
    coff--;
    wat--, wat--;
    sug--;
}

void CoffeeMachine::fill(){
    coff = 10;
    wat = 10;
    sug = 10;
}

void CoffeeMachine::show(){
    cout << "커피 머신 상태, 커피:" << coff << "\t물:" << wat << "\t설탕:" << sug << endl;
}
int main(){
    CoffeeMachine java(5, 10, 3); // 커피량 5, 물량 10, 설탕 :6으로 초기화
    java.drinkEspresso(); // 커피 1, 물 1 소비
    java.show(); // 현재 커피 머신의 상태 출력
    java.drinkAmericano(); // 커피1, 물 2 소비
    java.show(); // 현재 커피 머신의 상태 출력
    java.drinkSugarCoffee(); // 커피1, 물 2, 설탕 1 소비
    java.show(); // 현재 커피 머신의 상태 출력
    java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
    java.show();
}