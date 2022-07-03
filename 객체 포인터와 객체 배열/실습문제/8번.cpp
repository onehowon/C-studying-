#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};
void Circle::setRadius(int radius) {
    this->radius = radius;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main(){
    int n;
    cout << "원의 개수 >> ";
    cin >> n;
    Circle *c = new Circle[n];
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cout << "원 " << i+1 << "의 반지름 >> ";
        int x;
        cin >> x;
        c[i].setRadius(x);
        if (c[i].getArea() > 100) cnt++;
    }
    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다." << endl;
    delete[] c;
}