// 문제 5번을 참고해 짝수 정수만 랜덤으로 발생시키는 EvenRandom 클래스를 작성
// 10개의 짝수를 랜덤하게 출력하는 프로그램(0도 짝수 취급)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom{
public:
    EvenRandom();
    int next();
    int nextInRange(int a, int b);
};

EvenRandom::EvenRandom(){
    srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}

int EvenRandom::next(){
    int ran = rand();
    if(ran%2 == 0) return ran; // 2로 나눴을 때 0으로 떨어지는 수(짝수)
    else return --ran; // 그렇지 않은 수는 제거
}

int EvenRandom::nextInRange(int a, int b){
    int ran = rand()%(b-a+1) + a;
    if(ran%2 == 0) return ran;
    else return --ran;
}

int main(){
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++){
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++){
        int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl;
}