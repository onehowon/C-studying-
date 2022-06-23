struct Family{
    int count;
    char address[20];
public:
    Family();
private:
    char tel[11];
};
// 다음 C++ 구조체를 동일한 의미를 가지는 클래스로 작성하라.

class Family{
private:
    char tel[11];
public:
    int count;
    char address[20];
    Family();
};
// 구조체의 경우 디폴트 값이 public 선언이므로 private로 선언되는 값은 tel 하나이다.