#include <iostream>
using namespace std;

class House{ // 클래스 선언
    int numOfRooms; // 멤버 변수
    int size; 
public:
    House(int n, int s); //n과 s로 numOfRooms와 size를 각각 초기화
};
void f(){
    House a(2,20);
}
House b(3,30), c(4,40);
int main(){
    f();
    House d(5, 50);
}

// (1) n과 s로 numofrooms, size 각각 초기화 후 이들을 출력하는 생성자 구현
// 수정 후
class House{ // 클래스 선언
    int numOfRooms; // 멤버 변수
    int size; 
public:
    House(int n, int s); //n과 s로 numOfRooms와 size를 각각 초기화
};
House:House(int n, int s){
    numOfRooms = n; size = s;
    cout << "생성 - numOfRooms: " << n << "size : " << s << endl;
}

void f(){
    House a(2,20);
}
House b(3,30) c(4, 40);

int main(){
    f();
    House d(5,50);
}


// (2) size와 numofrooms 값을 출력하는 house 클래스의 소멸자 작성
// 수정 후
class House{
public:
    int numOfRooms;
    int size;
    House(int n, int s);
    ~House();
};
House:House(int n, int s){
    numOfRooms = n; size = s;
    cout << "생성 - numOfRooms: " << n << "size : " << s << endl;
}

void f(){
    House a(2,20);
}
House b(3,30) c(4, 40);

int main(){
    f();
    House d(5,50);
}

// (3) 객체 a,b,c,d가 생성되는 순서와 소멸되는 순서
// 생성되는 순서는 전역 객체 -> 지역 객체 순이므로 b,c가 1번, a가 2번 d가 3번이다.
// 소멸자는 그 반대이므로 d -> a -> c -> b 순으로 소멸