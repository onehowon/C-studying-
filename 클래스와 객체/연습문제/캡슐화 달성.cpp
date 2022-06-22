int acc; // int acc는 전역 변수
int add(int x){ // int add는 함수로 선언이 돼있음
    acc += x;
    return acc;
}
class Circle{ // 클래스
    public: // 접근 제어자
        int radius; //멤버 변수
        double getArea();
};

// 접근 제어자 public
// private 접근 제어자 및 멤버 함수의 부재
// 캡슐화 달성하고 있다고 보기 어려움