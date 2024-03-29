# 함수 호출에 따른 시간 오버헤드
### 함수 호출 오버헤드는 시간이 무시할 수 없는 비중을 차지하는 경우도 있다.
### 함수로 만들 때 시간을 고려해야 오버헤드의 비중이 상대적으로 작아져서 실행 시간이 짧아지게 된다.
### 함수에 대한 호출 오버헤드를 줄일 방법이 있다면 프로그램 실행 속도 개선이 가능해진다.

# 인라인 함수
## 인라인 함수란 짧은 코드로 구성된 함수에 대해, 함수 호출 오버헤드로 인한 프로그램의 실행 속도 저하를 막기 위해 도입된 기능(C 언어에서도 함수 앞에 inline 키워드를 이용)
### 컴파일러는 인라인 함수를 호출하는 곳에 인라인 함수의 코드를 그대로 삽입하여 함수 호출이 일어나지 않게 한다. 이렇게 되면, 함수 호출 오버헤드가 없어지기에 실행 속도가 빨라진다.
## 인라인 함수의 장단점
### 대부분 객체 지향 언어는 C++ 프로그램 같이 비교적 작은 함수를 쓴다.
### C++에서는 멤버 변수 값을 알아내고 멤버 변수에 값을 쓰는 이른바 getting/setter라고 불리는 작은 멤버 함수들이 존재하며, 이 멤버 함수들을 호출하는 코드 역시 많이 존재한다. 이런 작은 함수들을 인라인으로 선언하면 C++ 프로그램의 실행 속도를 향상 시킬 수 있다.
### 인라인 함수의 코드를 단순 삽입하면, 호출 시 여러 곳에 있을 경우 그 만큼 전체 크기가 늘어나는 단점이 있다.
### 가능한 작은 함수를 인라인으로 선언하는 것이 현명하다.

# C++ 구조체 선언
### C++에서는 C 언어와의 호환성을 위해 구조체를 지원한다.
### C++ 구조체는 표준 C 구조체에 기능 확장하여 클래스와 동일한 구조와 기능을 가진다.
### C++ 구조체는 struct 키워드로 선언하며, 멤버 변수와 멤버 함수를 가지고, 접근 지정도 해야 한다.

# 구조체와 클래스의 차이점
### C++ 구조체는 클래스와 기능적으로 동일하다.
### 클래스와 구조체가 다른 점은 클래스의 디폴트 접근 지정이 private인 반면, 구조체는 public이다.

# 구조체보단 클래스를 사용하라.
### 구조체와 클래스가 거의 같다면 클래스를 사용하는 편이 낫다.
### C 언어적 사고 탈피를 위해 구조체 사용을 피하는 것이 좋다.(헷갈릴 수도 있음.)

# 객체 포인터
## 포인터 변수에 객체 주소 지정
### 객체의 주소는 객체 이름 앞에 & 연산자를 사용하여 표현한다.
## 포인터를 이용한 객체 멤버 접근
### 객체 이름으로 멤버 접근 시 점(.) 연산자를 사용하지만 객체 포인터로 멤버 접근시 -> 연산자를 사용한다.
## 배열 소멸과 소멸자
### 함수가 종료되면 함수 내 선언된 배열도 소멸된다.
### 배열 소멸시 모든 원소 객체 소멸 되고 각 원소 객체마다 소멸자가 호출됨.
### Ex) main () 함수 종료시 circleArray 배열이 소멸되며, 높은 인덱스로부터 원소 객체 소멸되고, 각 객체마다 ~Circle() 소멸자 실행
## 객체 배열 초기화
### 객체 배열 생성시 다음과 같은 방법으로 원소 객체 초기화 할 수 있음.
### Circle circleArray[3] = {Circle(10), Circle(20), Circle()};
## 다차원 객체 배열
### C++에서는 2차원, 3차원 등 다차원 객체 배열을 만들 수 있음.
### 생성 방법 예) Circle circles[2][3] -> 2행 3열의 2차원 객체 배열 생성
## 메모리의 정적 할당
### 정적할당 개념 : 정적할당은 사용하기 이전에 한번 메모리를 할당 받으면 그 이후엔 메모리를 더 이상 확보할 수 없는 방식
### 단점 : 처음에 할당받은 메모리를 전부 쓰지 못하면 나머지 메모리가 낭비되며 메모리 할당량의 부족이 일어날 수도 있음
## 메모리의 동적 할당
### 동적할당 개념 : 동적할당은 필요한 만큼 메모리를 할당받아 사용하고 필요하지 않은 메모리는 반환하여 프로그램 사용 도중 원하는만큼 메모리를 원하는대로 사용할 수 있음
### 단점 : 할당을 받고 반환을 하지 않으면 메모리 낭비가 심해지고 적절하지 않은 메모리 반환시 실행 오류 발생. 또한 배열 단위 반환이 되지 않음.
## New와 Delete 함수의 활용법
### new 연산자 : '데이터타입'의 크기만큼 힙으로부터 메모리 할당받고 주소를 리턴한다.
### delete 연산자 : 포인터 변수가 가리키는 메모리를 힙으로 반환한다.
## this 포인터
### 객체 자신을 가리키는 포인터이다.
### 객체마다 존재하며, 클래스의 멤버 함수에만 사용 가능하다.
### static 멤버 함수에는 사용할 수 없다.
### 멤버 함수에 컴파일러 몰래 삽입한 매개 변수임.
## this가 꼭 필요한 2가지 CASE
### 멤버 변수 이름과 매개 변수 이름을 동일하게 선언할 때 필요함
### 객체 자신의 주소를 리턴할 때 필요함
## String 클래스
### C-스트링은 C언어에서 사용해오던 전통적인 문자열로서 '\0'로 끝나는 문자 배열을 문자열로 취급하는 방법이다.
