#include <iostream>
using namespace std;

int odd(int x){
    return (x%2);
}

int main(){
    int sum = 0;

    // 1���� 10000������ Ȧ���� �� ���
    for(int i=1; i<=10000; i++){
        if(odd(i)) // 10000���� �Լ� ȣ��. ȣ�⿡ ���� ��û�� ������� �ð��� �ҿ��.
            sum += i;
    }
    cout << sum;
}

// ����� : 25000000