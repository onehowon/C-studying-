struct Family{
    int count;
    char address[20];
public:
    Family();
private:
    char tel[11];
};
// ���� C++ ����ü�� ������ �ǹ̸� ������ Ŭ������ �ۼ��϶�.

class Family{
private:
    char tel[11];
public:
    int count;
    char address[20];
    Family();
};
// ����ü�� ��� ����Ʈ ���� public �����̹Ƿ� private�� ����Ǵ� ���� tel �ϳ��̴�.