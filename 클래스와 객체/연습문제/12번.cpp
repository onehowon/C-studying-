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

// ���� : ��ü a,b,c ���� �� �Ҹ�Ǵ� ������?
// �� : ���� ��ü -> ���� ��ü �� �����̹Ƿ� c -> b -> a ������ ���� �Ҹ��� a -> b -> c