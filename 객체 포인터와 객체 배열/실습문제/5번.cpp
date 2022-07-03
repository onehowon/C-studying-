#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    string str;

    while(true){
        getline(cin, str);
        if(str.compare("exit") == 0) break;

        srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
        int n = rand() % (str.length()); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생

        srand((unsigned)time(0));
        char ch = 'a' + rand() % 26;

        str[n] = ch;

        cout << ">>" << str << endl;
    }

    return 0;
}