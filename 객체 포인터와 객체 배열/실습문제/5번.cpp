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

        srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
        int n = rand() % (str.length()); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�

        srand((unsigned)time(0));
        char ch = 'a' + rand() % 26;

        str[n] = ch;

        cout << ">>" << str << endl;
    }

    return 0;
}