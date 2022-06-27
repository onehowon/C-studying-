#include <iostream>
#include <stdlib.h>

using namespace std;

class Sample{
    int a;
public:
    Sample() { a = 100; cout << a << ' ';}
    Sample(int x) { a = x; cout << a << ' ';}
    Sample(int x, int y){ a = x*y; cout << a << ' ';}
    int get() { return a; }
};

int main(int argc, char *argv[]){
    Sample arr[3]; // �Ķ���� ���� Sample Ŭ������ ������ 3�� ����
    Sample arr2D[2][2] = {{Sample(2,3), Sample(2,4)}, {Sample(5), Sample()}}; // 6, 8, 5, 100���� a�� �ʱ�ȭ �� Sample ������ 4�� ����
    int sum = 0; // 1�� , 2��
    // 3��
    
    Sample *p = arr; // ��ü �����ͷ� arr �ּ� ���� ��������
    sum = 0;
    for(int i = 0; i < 3; i++){ // ��ü �����ͷ� arr ��ü �迭������ ���� ���ϱ�
        sum += p->get();
        p++;
    }
    cout << "\nsum = " << sum << endl;

    // 4��
    sum = 0;
    for(int i = 0; i<2; i++){ // �ݺ����� �ι� ���� ������ �迭 ������ ���� ���ϱ�
        for(int j = 0; j<2; j++){
            sum += arr2D[i][j].get();
        }
    }
    cout << "sum = " << sum << endl;

    return 0;
}