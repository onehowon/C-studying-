// 소스코드
string a("My name is Jane.");
char ch = a.at(2);
if(a.compare("My name is John.") == 0) cout << "same";
a.append("~~");
a.replace(1,1,"Y");

// 각 라인을 string 클래스에서 제공하는 연산자를 이용하여 고치기
#include <string>
string a("My name is Jane.");
char ch = a[2];
if (a == "My name is John") cout << "same";
a += "~~";
a[1] = "Y";