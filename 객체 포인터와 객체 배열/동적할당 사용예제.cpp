#include <iostream>
using namespace std;

int main(){
    double *p;

    p = new double;
    if(!p){
        cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
        return 0;
    }

    *p = 3.14;
    int n = *p;
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;
}