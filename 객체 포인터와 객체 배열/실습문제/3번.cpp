// string Ŭ������ �̿��� ��ĭ�� �����ϴ� ���ڿ��� �Է¹ް� ���ڿ����� 'a'�� � �ִ��� ����ϴ� ���α׷� �ۼ��ϱ�
// ���ڿ����� 'a'�� ã�� ���� string Ŭ������ ��� at()�� []�� �̿��Ͽ� �ۼ��϶�.

#include <iostream>
using namespace std;

// (1��)
int main(){
    string s;
    cout << "���ڿ� �Է�>> ";
    getline(cin, s, '\n');

    int cnt = 0;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == 'a') cnt++;
    }

    cout << "���� a�� " << cnt << "�� �ֽ��ϴ�.";
}