class Universe{
    char creator[10];
    int size;
private:
    char dateCreated[10];
public:
    Universe();
};

// ���� Ŭ������ ����ü�� �����϶�.

struct Universe{
public:
    Universe();
private:
    int size;
    char dateCreated[10];
    char creator[10];
};