#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    string str;
    while(1){
        cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)\n>> ";

        getline(cin, str, '\n');
        if(str == "exit") break;
        for (int i = str.length()-1; i >= 0 ; i--){
            cout << str[i];
        }
        cout << endl;
    }
}