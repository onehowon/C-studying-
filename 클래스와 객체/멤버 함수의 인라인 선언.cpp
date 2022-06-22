// 멤버 함수를 inline으로 선언하는 경우

class Circle{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    double getArea();
};

inline Circle::Circle(){
    radius = 1;
}

Circle::Circle(int r){
    radius = r;
}

inline double Circle::getArea(){
    return 3.14*radius*radius;
}

// 자동 inline 처리되는 경우
class Circle{
private:
    int radius;
public:
    Circle(){ // 자동 인라인 함수
        radius = 1;
    }

    Circle(int r);
    double getArea(){ // 자동 인라인 함수
        return 3.14*radius*radius;
    }
};

Circle::Circle(int r){
    radius = r;
}