// 멤버 변수가 보호받지 못하는 경우(public)
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
    waffle.radius = 5; // 노출된 멤버는 마음대로 접근. 나쁜 사례
}

// 멤버 변수가 보호 받는 경우(private)

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
    Circle waffle(5); // 생성자에서 radius 설정
    waffle.radius = 5; // private 멤버 접근 불가 (사용 불가)
}

// 생성자는 public 또는 protected 으로 선언해야 함. 그렇지 않은 경우 외부에서 객체를 생성할 수 없다.
// 의도적으로 외부 객체 생성을 막기 위해 private로 선언하기도 하고, 자식 클래스에서만 생성자를 호출하도록 protected로 선언하기도 한다.