// CoffeeMachine Ŭ���� ����
// � ��� ������ � ��� �Լ��� �ʿ����� �Ǵ��ϱ�

#include <iostream>
using namespace std;

class CoffeeMachine{
private:
    int coff, wat, sug; // Ŀ��, ��, ������ ��� ����
public:
    CoffeeMachine(int _coff, int _wat, int _sug);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill(); // ��, Ŀ��, ���� �� ä��� default = 10
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
    cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coff << "\t��:" << wat << "\t����:" << sug << endl;
}
int main(){
    CoffeeMachine java(5, 10, 3); // Ŀ�Ƿ� 5, ���� 10, ���� :6���� �ʱ�ȭ
    java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
    java.show(); // ���� Ŀ�� �ӽ��� ���� ���
    java.drinkAmericano(); // Ŀ��1, �� 2 �Һ�
    java.show(); // ���� Ŀ�� �ӽ��� ���� ���
    java.drinkSugarCoffee(); // Ŀ��1, �� 2, ���� 1 �Һ�
    java.show(); // ���� Ŀ�� �ӽ��� ���� ���
    java.fill(); // Ŀ�� 10, �� 10, ���� 10���� ä���
    java.show();
}