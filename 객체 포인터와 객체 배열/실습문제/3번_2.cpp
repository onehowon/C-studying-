// string Ŭ������ �̿��� ��ĭ�� �����ϴ� ���ڿ��� �Է¹ް� ���ڿ����� 'a'�� � �ִ��� ����ϴ� ���α׷� �ۼ��ϱ�
// ���ڿ����� 'a'�� ã�� ���� string Ŭ������ ��� at()�� []�� �̿��Ͽ� �ۼ��϶�.

#include <iostream>
using namespace std;

// (2��)
string s;
int cnt, idx; 

void fnc(int x){
    idx = s.find('a', x);
    if(idx != -1){
        cnt++;
        fnc(idx+1);
    }
    else return;
}

int main(){
    cout << "���ڿ� �Է�>> ";
    getline(cin, s, '\n');

    fnc(0);
    cout << "���� a�� " << cnt << "�� �ֽ��ϴ�.";
}