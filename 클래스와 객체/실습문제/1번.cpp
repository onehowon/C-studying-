// main()�� ���� ����� ������ ������ Tower Ŭ������ �ۼ��϶�
// ���̴� 1����
// ���̴� 100����

#include <iostream>
using namespace std;

class Tower{
public:
    int height; // ��� ����
    Tower(); // ��� �Լ�
    Tower(int height);
    int getHeight();
};

Tower::Tower(){ // ���� �ʱ�ȭ
    height = 1;
}

Tower::Tower(int height){
    this->height = height; // �ڱ� �ڽ��� ����Ű�� ������(this)
}

int Tower::getHeight(){
    return height;
}

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout << "���̴�" << myTower.getHeight() << "����" << endl;
    cout << "���̴�" << seoulTower.getHeight() << "����" << endl;
    return 0;
}