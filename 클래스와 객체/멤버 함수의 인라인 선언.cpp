// ��� �Լ��� inline���� �����ϴ� ���

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

// �ڵ� inline ó���Ǵ� ���
class Circle{
private:
    int radius;
public:
    Circle(){ // �ڵ� �ζ��� �Լ�
        radius = 1;
    }

    Circle(int r);
    double getArea(){ // �ڵ� �ζ��� �Լ�
        return 3.14*radius*radius;
    }
};

Circle::Circle(int r){
    radius = r;
}