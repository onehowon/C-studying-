#include <iostream>
#include <string>
using namespace std;

int main(){
    // ��Ʈ�� ����
    string str; // �� ���ڿ��� ���� ��ü ����
    string address("����� ���ϱ� �Ｑ�� 389");
    string copyAddress(address); // address�� ���ڿ��� ������ ��Ʈ�� ��ü ����

    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+','+', '\0'};
    string title(text);

    // ��Ʈ�� ���
    cout << str << endl; // �� ��Ʈ��. �ƹ� �͵� ��µ��� ����
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
}
