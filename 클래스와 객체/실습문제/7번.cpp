// 5�� ������ �����Ͽ� ������ �̿��� ¦�� Ȧ�� ������ �� �ִ� Selectable Random Ŭ���� �ۼ�
// ¦�� 10�� Ȧ�� 10���� �߻����Ѿ� ��

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class SelectableRandom{
    int num;
public:
    SelectableRandom(int _num); // �Ű������� ¦�� Ȥ�� Ȧ���� �޴´�.
    int next();
    int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom(int _num){
    num = _num;
    srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}

int SelectableRandom::next(){
    int ran = rand();
    if(num%2 == 0){ // ¦�� return
        if(ran%2 == 0)
            return ran;
        else
            return --ran;
    }
    else{
        if(ran%2 == 0) // Ȧ�� return
            return ++ran;
        else
            return ran;
    }
}

int SelectableRandom::nextInRange(int a, int b){
    int ran = rand()%(b-a+1) + a;
    if(num%2 == 0){
        if(ran%2 == 0)
            return ran;
        else
            return ++ran; // ¦��
    }
    else {
        if(ran%2 == 0)
            return ++ran;
        else
            return ran;
    }
}

int main(){
    SelectableRandom r1(0); // ¦�� ���� ���� �߻�
    cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
    for(int i=0; i<10; i++){
        int n = r1.next(); // 0���� RAND_MAX(32767) ������ ������ ����
        cout << n << ' ';
    }
    SelectableRandom r2(1); // Ȧ�� ���� ���� �߻�
    cout << endl << endl << "-- 2���� " << "9 ������ Ȧ�� ���� ���� 10 �� --" << endl;
    for(int i=0; i<10; i++){
        int n = r2.nextInRange(2, 9); // 2���� 9 ������ ������ ����
        cout << n << ' ';
    }
    cout << endl;
}