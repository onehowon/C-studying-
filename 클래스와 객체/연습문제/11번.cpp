#include <iostream>
using namespace std;

class House{ // Ŭ���� ����
    int numOfRooms; // ��� ����
    int size; 
public:
    House(int n, int s); //n�� s�� numOfRooms�� size�� ���� �ʱ�ȭ
};
void f(){
    House a(2,20);
}
House b(3,30), c(4,40);
int main(){
    f();
    House d(5, 50);
}

// (1) n�� s�� numofrooms, size ���� �ʱ�ȭ �� �̵��� ����ϴ� ������ ����
// ���� ��
class House{ // Ŭ���� ����
    int numOfRooms; // ��� ����
    int size; 
public:
    House(int n, int s); //n�� s�� numOfRooms�� size�� ���� �ʱ�ȭ
};
House:House(int n, int s){
    numOfRooms = n; size = s;
    cout << "���� - numOfRooms: " << n << "size : " << s << endl;
}

void f(){
    House a(2,20);
}
House b(3,30) c(4, 40);

int main(){
    f();
    House d(5,50);
}


// (2) size�� numofrooms ���� ����ϴ� house Ŭ������ �Ҹ��� �ۼ�
// ���� ��
class House{
public:
    int numOfRooms;
    int size;
    House(int n, int s);
    ~House();
};
House:House(int n, int s){
    numOfRooms = n; size = s;
    cout << "���� - numOfRooms: " << n << "size : " << s << endl;
}

void f(){
    House a(2,20);
}
House b(3,30) c(4, 40);

int main(){
    f();
    House d(5,50);
}

// (3) ��ü a,b,c,d�� �����Ǵ� ������ �Ҹ�Ǵ� ����
// �����Ǵ� ������ ���� ��ü -> ���� ��ü ���̹Ƿ� b,c�� 1��, a�� 2�� d�� 3���̴�.
// �Ҹ��ڴ� �� �ݴ��̹Ƿ� d -> a -> c -> b ������ �Ҹ�