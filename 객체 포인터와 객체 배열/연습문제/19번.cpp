// �ҽ��ڵ�
string a("My name is Jane.");
char ch = a.at(2);
if(a.compare("My name is John.") == 0) cout << "same";
a.append("~~");
a.replace(1,1,"Y");

// �� ������ string Ŭ�������� �����ϴ� �����ڸ� �̿��Ͽ� ��ġ��
#include <string>
string a("My name is Jane.");
char ch = a[2];
if (a == "My name is John") cout << "same";
a += "~~";
a[1] = "Y";