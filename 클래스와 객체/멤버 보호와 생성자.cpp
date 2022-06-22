// ��� ������ ��ȣ���� ���ϴ� ���(public)
class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle(){
    radius = 1;
}
Circle::Circle(int r){
    radius = r;
}

int main(){
    Circle waffle;
    waffle.radius = 5; // ����� ����� ������� ����. ���� ���
}

// ��� ������ ��ȣ �޴� ���(private)

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle(){
    radius = 1;
}
Circle::Circle(int r){
    radius = r;
}

int main(){
    Circle waffle(5); // �����ڿ��� radius ����
    waffle.radius = 5; // private ��� ���� �Ұ� (��� �Ұ�)
}

// �����ڴ� public �Ǵ� protected ���� �����ؾ� ��. �׷��� ���� ��� �ܺο��� ��ü�� ������ �� ����.
// �ǵ������� �ܺ� ��ü ������ ���� ���� private�� �����ϱ⵵ �ϰ�, �ڽ� Ŭ���������� �����ڸ� ȣ���ϵ��� protected�� �����ϱ⵵ �Ѵ�.