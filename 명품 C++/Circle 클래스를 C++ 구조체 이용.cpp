#include <iostream>
using namespace std;

struct StructCircle{ // ����ü ����
private: // ����ü�� ����Ʈ ���� ������ public
    int radius;
public:
    StructCircle(int r) {radius = r;} // ����ü�� ������
    double getArea();
};

double StructCircle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    StructCircle waffle(3);
    cout << "������ " << waffle.getArea(); 
}