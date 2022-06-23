// ���࿡�� ����ϴ� ���α׷� �ۼ��� ���� ���� ���� �ϳ��� ǥ���ϴ� Ŭ���� ACCOUNT�� �ʿ��ϴ�.
// ���� ������ ������ ����, ���� ��ȣ, �ܾ��� ��Ÿ���� 3 ��� ������ �̷������. main()�Լ� ���� ����� ������ ������ Ŭ���� �����ϱ�
// ��� ��: kitae�� �ܾ��� 55000 / kitae�� �ܾ��� 35000

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
    Account a("kitae", 1, 5000); // id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
    a.deposit(50000);
    cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl;
    int money = a.withdraw(20000); // 20000�� ���. withdraw()�� ���� �ݾ� ����
    cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
    return 0;
}