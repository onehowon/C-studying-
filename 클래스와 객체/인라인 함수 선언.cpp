#include <iostream>
using namespace std;

inline int odd(int x){
    return (x%2);
}

int main(){
    int sum = 0;

    for(int i=1; i<=10000; i++){
        if(odd(i))
            sum += i;
    }
    cout << sum;
}

// 인라인 선언은 컴파일러에게 주는 일종의 요청이지 강제 명령이 아니다.
// 컴파일러는 함수 효율, 크기 등을 따져서 inline 선언을 무시할 수도 있다.
// 컴파일러에 따라 재귀함수, static 변수, 반복문, switch 문, goto 문 등은 예외