class TV{
    int channels;
public:
    TV(){ channels = 256; }
    TV(int a){channels = a;}
    int getChannels();
};
inline int TV::getChannels() { return channels; }

// ���� �ڵ忡�� �ڵ� �ζ��� �Լ��� ã�ƶ�.
// TV()�� TV(int a) ��� �ڵ� �ζ��� �Լ��̴�. Ŭ���� �� ����� �ۼ��� �Լ� ��� �����Ϸ��� ���� �ڵ� �ζ��� ó��
// inline int TV�� ��� �Լ��� inline���� �����ϴ� ���