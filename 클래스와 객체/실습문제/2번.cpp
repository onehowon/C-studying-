// 날짜를 다루는 Date 클래스를 작성하고자 한다. Date를 이용하는 main()과 실행 결과는 다음과 같다.
// 클래스 Date를 작성하여 아래 프로그램에 추가하라.
// 결과 값 1945년 8월 15일 , 2014, 3, 20

#include <iostream>
#include <string>
using namespace std;

class Date{
public:
    int year;
    int month;
    int day;
    Date(int year, int month, int day);
    Date(string date);
    void show();
    int getYear();
    int getMonth();
    int getDay();
};

Date::Date(int year, int month, int day)
{
    this->year=year;
    this->month=month;
    this->day=day;
}

Date::Date(string date)
{
    int ind;

    this->year = stoi(date); // stoi : string to int

    ind = date.find('/');
    this->month = stoi(date.substr(ind + 1)); // substr : 지정된 위치에서 특정 길이만큼 문자열 제거

    ind = date.find('/', ind + 1);
    this->day = stoi(date.substr(ind + 1));
}

void Date::show()
{
    cout << year << "년" << month << "월" << day << "일" << endl;
}

int Date::getYear()
{
    return year;
}
int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
int main(){
    Date birth(2014, 3, 20); // 2014년 3월 20일
    Date independenceDay("1945/8/15"); // 1945년 8월 15일
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
    return 0;
}