#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person{
    string name;
    string tel;
public:
    Person();
    string getName(){return name;}
    string getTal(){return tel;}
    void set(string name, string tel);
};

Person::Person(){
}
void Person::set(string name, string tel){
    this -> name = name;
    this -> tel = tel;
}

int main(){
    Person person[3];
    cout << "�̸��� ��ȭ ��ȣ�� �Է����ּ���" << endl;

    for(int i = 0; i < 3; i++){
        cout << "��� " << i+1 << ">> ";
        string name, tel;
        cin >> name >> tel;
        person[i].set(name, tel);
    }

    cout << "��� ����� �̸��� ";
    for (int i = 0; i < 3; i++){
        cout << person[i].getName() << ' ';
    }
    cout << endl;

    cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
    string find;
    cin >> find;
    for (int i = 0; i < 3; i++){
        if(find.compare(person[i].getName()) == 0){
            cout << "��ȭ ��ȣ�� " << person[i].getTal() << endl;
            break;
        }
    }
    return 0;
}