class TV {
    int channels;
public:
    int colors;
    TV() { channels = 256; }
    TV(int a, int b){ channels = a; colors = b; }
};
int main(){
    TV LG;
    LG.channels = 200;
    LG.colors = 60000;
    TV Samsung(100, 50000);
}

// channels의 변수가 main문에서도 접근하여 사용 되는데 TV 클래스의 private 접근지정자로 선언 돼있기에 public으로 멤버 변수를 빼준다.

// 다음 프로그램의 오류를 지적하고 수정하라.
//수정 후

class TV{
public:
    int channels;
    int colors;
    TV() { channels = 256; }
    TV(int a, int b){ channels = a; colors = b; }
};
int main(){
    TV LG;
    LG.channels = 200;
    LG.colors = 60000;
    TV Samsung(100, 50000);
}