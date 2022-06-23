// 은행에서 사용하는 프로그램 작성을 위해 은행 계좌 하나를 표현하는 클래스 ACCOUNT가 필요하다.
// 계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다. main()함수 실행 결과가 다음과 같도록 클래스 생성하기
// 결과 값: kitae의 잔액은 55000 / kitae의 잔액은 35000

#include <iostream>
#include <string>

using namespace std;

class Account{
public:
    string name;
    int id;
    int balance;
    Account(string name, int id, int balance);
    void deposit(int money);
    int withdraw(int money);
    int inquiry();
    string getOwner();
};

Account::Account(string name, int id, int balance)
{
    this->name = name;
    this->id = id;
    this->balance = balance;
}

void Account::deposit(int money)
{
    balance += money;
}
int Account::withdraw(int money)
{
    balance -= money;
    return balance;
}

int Account::inquiry()
{
    return balance;
}
string Account::getOwner()
{
    return name;
}


int main(){
    Account a("kitae", 1, 5000); // id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
    int money = a.withdraw(20000); // 20000원 출금. withdraw()는 실제 금액 리턴
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    return 0;
}