// string 클래스를 이용해 빈칸을 포함하는 문자열을 입력받고 문자열에서 'a'가 몇개 있는지 출력하는 프로그램 작성하기
// 문자열에서 'a'를 찾기 위해 string 클래스의 멤버 at()나 []를 이용하여 작성하라.

#include <iostream>
using namespace std;

// (2번)
string s;
int cnt, idx; 

void fnc(int x){
    idx = s.find('a', x);
    if(idx != -1){
        cnt++;
        fnc(idx+1);
    }
    else return;
}

int main(){
    cout << "문자열 입력>> ";
    getline(cin, s, '\n');

    fnc(0);
    cout << "문자 a는 " << cnt << "개 있습니다.";
}