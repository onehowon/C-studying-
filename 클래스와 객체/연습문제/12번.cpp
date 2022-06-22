class House{
    int numOfRooms;
    int size;
public:
    House(int r, int s){ numOfRooms = n; size = s; }
    void test(){
    House a(1, 10);
    }
};
void f(){
    House b(2, 20);
    b.test();
}
House c(3,30);
int main(){
    f();
}

// 문제 : 객체 a,b,c 생성 후 소멸되는 순서는?
// 답 : 전역 객체 -> 지역 객체 순 생성이므로 c -> b -> a 순으로 생성 소멸은 a -> b -> c