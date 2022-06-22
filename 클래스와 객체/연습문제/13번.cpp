class TV{
    TV() { channels = 256; }
public:
    int channels;
    TV(int a){ channels = a;}
};
int main(){
    TV LG;
    LG.channels = 200;
    TV Samsung(100);
}

// 틀린 부분 지적 후 수정
// 위 코드에서 LG 객체에 멤버 변수가 없으므로 생성자로 초기화 해줘야 하는데 private 구역 내에서 오류가 나므로 public 구간으로 이동

#include <iostream>
class TV{
public:
    TV() { channels = 256; }
    TV(int a){ channels = a;}
};
int main(){
    TV LG;
    LG.channels = 200;
    TV Samsung(100);
}