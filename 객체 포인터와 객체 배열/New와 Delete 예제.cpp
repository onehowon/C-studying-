#include <iostream>
using namespace std;

int *pInt = new int; // int 타입의 정수공간 할당
char *pChar = new Char; // char 타입의 문자 공간 할당
Circle *pCircle = new Circle(); // Circle 클래스 타입의 객체 할당

delete pInt; // 할당받은 정수공간 반환
delete pChar; // 할당받은 문제공간 반환
delete pCircle; // 할당받은 객체공간 반환

int *p = new int; // 힙으로부터 int 타입의 정수 공간 할당
if(!p){ // if(p==NULL)과 동일. p가 NULL이면
    return; // 메모리 할당받기 실패
}
*P = 5; // 할당받은 정수 공간에 5 기록
int n = *p; // 할당받은 정수 공간에서 값 읽기, n = 5
delete p; // 할당받은 정수 공간 반환