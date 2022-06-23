class TV{
    int channels;
public:
    TV(){ channels = 256; }
    TV(int a){channels = a;}
    int getChannels();
};
inline int TV::getChannels() { return channels; }

// 다음 코드에서 자동 인라인 함수를 찾아라.
// TV()와 TV(int a) 모두 자동 인라인 함수이다. 클래스 내 선언부 작성된 함수 모두 컴파일러에 의해 자동 인라인 처리
// inline int TV는 멤버 함수를 inline으로 선언하는 방법