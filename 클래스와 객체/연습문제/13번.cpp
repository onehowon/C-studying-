class TV{
    TV() { channels = 256; }
public:
    int channels;
    TV(int a){ channels = a;}
};
int main(){
    TV LG;
    LG.channels = 200;
    TV Samsung(100);
}

// Ʋ�� �κ� ���� �� ����
// �� �ڵ忡�� LG ��ü�� ��� ������ �����Ƿ� �����ڷ� �ʱ�ȭ ����� �ϴµ� private ���� ������ ������ ���Ƿ� public �������� �̵�

#include <iostream>
class TV{
public:
    TV() { channels = 256; }
    TV(int a){ channels = a;}
};
int main(){
    TV LG;
    LG.channels = 200;
    TV Samsung(100);
}