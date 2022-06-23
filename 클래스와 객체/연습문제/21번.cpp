class Universe{
    char creator[10];
    int size;
private:
    char dateCreated[10];
public:
    Universe();
};

// 다음 클래스를 구조체로 선언하라.

struct Universe{
public:
    Universe();
private:
    int size;
    char dateCreated[10];
    char creator[10];
};