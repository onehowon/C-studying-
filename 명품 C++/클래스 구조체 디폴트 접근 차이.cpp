// 구조체에서 디폴트 접근 지정은 public
struct Circle{
    Circle();
    Circle(int r);
    double getArea();
private:
    int radius;
}

// 클래스에서의 디폴트 접근 지정은 private
class Circle{
    int radius;
public:
    Circle();
    Circle(int r);
    double getArea();
};