int age;
void older(){
    age++;
}

class Circle{
    int radius;
public:
    double getArea();
    // LINE 1�� �������� age�� class ���� private ���� �����ڷ� ���� age�� Circle�� ��� �Լ��� �����Ѵ�.
};
// ���� ��
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
    // Ŭ���� ���� �� ����ÿ� ;�� �ٿ���� ��
}

//------------------------------------------------------------------------------------//
class Tower{
    int height = 20;
public:
    Tower(){ height = 10; return;}
}
// �����ڴ� ����Ÿ���� �������� �ʴ´�. ���� ���� �����ϸ� ��.

//------------------------------------------------------------------------------------//
class Building{ // Ŭ���� ����
    private: // ���� ������
        int floor; // ��� ���� �ʱ�ȭ
    public: // ������
        Building(int s) { floor = s; }
};
int main(){
    Building twin, star;
    Building BlueHouse(5), JangMi(14);
}
// ��� �Լ��� ���� �����ڸ� �ʱ�ȭ ���ָ� �ȴ�.
// ���� ��
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
    int year; // ��� ���� �ʱ�ȭ
public: // ������
    Calender();
    int getYear();
}
// ���� ��
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