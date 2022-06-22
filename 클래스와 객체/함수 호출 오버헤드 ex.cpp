#include <iostream>
using namespace std;

int odd(int x){
    return (x%2);
}

int main(){
    int sum = 0;

    // 1에서 10000까지의 홀수의 합 계산
    for(int i=1; i<=10000; i++){
        if(odd(i)) // 10000번의 함수 호출. 호출에 따른 엄청난 오버헤드 시간이 소요됨.
            sum += i;
    }
    cout << sum;
}

// 결과값 : 25000000