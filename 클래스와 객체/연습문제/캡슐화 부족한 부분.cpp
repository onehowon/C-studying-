int age;
void older(){
    age++;
}

class Circle{
    int radius;
public:
    double getArea();
    // LINE 1의 전역변수 age를 class 내부 private 접근 지정자로 선언 age를 Circle의 멤버 함수로 선언한다.
};
// 수정 후
class Circle{
    int age;
    int radius;
public:
    double getArea();
    void older(){age++};
}
//------------------------------------------------------------------------------------//
class Circle{
    int radius;
    double getArea();
    // 클래스 선언 후 종료시에 ;를 붙여줘야 함
}

//------------------------------------------------------------------------------------//
class Tower{
    int height = 20;
public:
    Tower(){ height = 10; return;}
}
// 생성자는 리턴타입을 선언하지 않는다. 따라서 리턴 제거하면 됨.

//------------------------------------------------------------------------------------//
class Building{ // 클래스 선언
    private: // 접근 제어자
        int floor; // 멤버 변수 초기화
    public: // 생성자
        Building(int s) { floor = s; }
};
int main(){
    Building twin, star;
    Building BlueHouse(5), JangMi(14);
}
// 멤버 함수가 없는 생성자를 초기화 해주면 된다.
// 수정 후
class Building{
private:
    int floor;
public:
    Building(){floor;};
    Building(int s){floor s;}
};
int main(){
    Building twin, star;
    Building BlueHouse(5), JangMi(14);
}
//------------------------------------------------------------------------------------//
class Calendar{
private:
    int year; // 멤버 변수 초기화
public: // 생성자
    Calender();
    int getYear();
}
// 수정 후
class Calendar{
private:
    int year;
public:
    Calendar();
    int getYear();    
};

Calendar::Calendar(){
    year = 10;
}

int Calendar::getYear(){
    return year;
}