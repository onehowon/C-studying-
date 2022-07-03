// 정수 공간 5개를 배열로 동적 할당받고, 정수를 5개 입력받아 평균을 구하고 출력한뒤 배열을 소멸시키도록 main() 함수를 작성하라.
#include <iostream>
using namespace std;

int main(){
    double ans = 0;
    int* p = new int[5];
    cout << "정수 5개 입력>> ";
    for (int i = 0; i < 5; i++){
        cin >> p[i];
        ans += p[i];
    }
    cout << "평균 " << ans / 5;
}