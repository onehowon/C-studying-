// ����ü���� ����Ʈ ���� ������ public
struct Circle{
    Circle();
    Circle(int r);
    double getArea();
private:
    int radius;
}

// Ŭ���������� ����Ʈ ���� ������ private
class Circle{
    int radius;
public:
    Circle();
    Circle(int r);
    double getArea();
};