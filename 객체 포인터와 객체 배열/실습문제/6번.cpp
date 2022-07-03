#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    string str;
    while(1){
        cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n>> ";

        getline(cin, str, '\n');
        if(str == "exit") break;
        for (int i = str.length()-1; i >= 0 ; i--){
            cout << str[i];
        }
        cout << endl;
    }
}