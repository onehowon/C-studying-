// main()의 실행 결과가 다음과 같도록 Tower 클래스를 작성하라
// 높이는 1미터
// 높이는 100미터

#include <iostream>
using namespace std;

class Tower{
public:
    int height; // 멤버 변수
    Tower(); // 멤버 함수
    Tower(int height);
    int getHeight();
};

Tower::Tower(){ // 변수 초기화
    height = 1;
}

Tower::Tower(int height){
    this->height = height; // 자기 자신을 가리키는 포인터(this)
}

int Tower::getHeight(){
    return height;
}

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는" << myTower.getHeight() << "미터" << endl;
    cout << "높이는" << seoulTower.getHeight() << "미터" << endl;
    return 0;
}