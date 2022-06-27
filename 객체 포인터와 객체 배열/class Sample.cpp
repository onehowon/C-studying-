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
    Sample arr[3]; // 파라미터 없는 Sample 클래스의 생성자 3개 생성
    Sample arr2D[2][2] = {{Sample(2,3), Sample(2,4)}, {Sample(5), Sample()}}; // 6, 8, 5, 100으로 a가 초기화 된 Sample 생성자 4개 생성
    int sum = 0; // 1번 , 2번
    // 3번
    
    Sample *p = arr; // 객체 포인터로 arr 주소 값을 가져오기
    sum = 0;
    for(int i = 0; i < 3; i++){ // 객체 포인터로 arr 객체 배열원소의 합을 구하기
        sum += p->get();
        p++;
    }
    cout << "\nsum = " << sum << endl;

    // 4번
    sum = 0;
    for(int i = 0; i<2; i++){ // 반복문을 두번 돌려 이차원 배열 원소의 합을 구하기
        for(int j = 0; j<2; j++){
            sum += arr2D[i][j].get();
        }
    }
    cout << "sum = " << sum << endl;

    return 0;
}