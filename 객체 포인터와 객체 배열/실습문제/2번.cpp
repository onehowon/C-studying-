// ���� ���� 5���� �迭�� ���� �Ҵ�ް�, ������ 5�� �Է¹޾� ����� ���ϰ� ����ѵ� �迭�� �Ҹ��Ű���� main() �Լ��� �ۼ��϶�.
#include <iostream>
using namespace std;

int main(){
    double ans = 0;
    int* p = new int[5];
    cout << "���� 5�� �Է�>> ";
    for (int i = 0; i < 5; i++){
        cin >> p[i];
        ans += p[i];
    }
    cout << "��� " << ans / 5;
}