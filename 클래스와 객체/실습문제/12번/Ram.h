class Ram{
    char mem[100 * 1024]; // 100KB �޸�. �� ������ �� ����Ʈ�Ƿ� char ���
    int size;
public:
    Ram(); // mem �迭�� 0���� �ʱ�ȭ�ϰ� size�� 100*1024�� �ʱ�ȭ
    ~Ram(); // "�޸� ���ŵ�" ���ڿ� ���
    char read(int address); // address �ּ��� �޸� ����Ʈ ����
    void write(int address, char value); // address �ּҿ� �� ����Ʈ�� value ����
};
