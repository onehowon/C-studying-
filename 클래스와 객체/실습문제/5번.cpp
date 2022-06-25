// 랜덤 수를 발생 시키는 Random 클래스 만들기
// Random 클래스는 생성자, next(), nextInRange()의 3개의 멤버 함수를 가지도록 작성
// main 함수와 합쳐 하나의 cpp 파일에 구현하기

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random{
public:
    Random();
    int next();
    int nextInRange(int a, int b);
};

Random::Random(){
    srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}

int Random::next(){
    return rand();
}

int Random::nextInRange(int a, int b){
    return rand()%(b-a+1) + a;
}

int main(){
    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++){
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++){
        int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl;
}