// 5번 문제를 참고하여 생성자 이용해 짝수 홀수 선택할 수 있는 Selectable Random 클래스 작성
// 짝수 10개 홀수 10개를 발생시켜야 함

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class SelectableRandom{
    int num;
public:
    SelectableRandom(int _num); // 매개변수로 짝수 혹은 홀수를 받는다.
    int next();
    int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom(int _num){
    num = _num;
    srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}

int SelectableRandom::next(){
    int ran = rand();
    if(num%2 == 0){ // 짝수 return
        if(ran%2 == 0)
            return ran;
        else
            return --ran;
    }
    else{
        if(ran%2 == 0) // 홀수 return
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
            return ++ran; // 짝수
    }
    else {
        if(ran%2 == 0)
            return ++ran;
        else
            return ran;
    }
}

int main(){
    SelectableRandom r1(0); // 짝수 랜덤 정수 발생
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++){
        int n = r1.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    SelectableRandom r2(1); // 홀수 랜덤 정수 발생
    cout << endl << endl << "-- 2에서 " << "9 까지의 홀수 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++){
        int n = r2.nextInRange(2, 9); // 2에서 9 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl;
}