#include <iostream>
using namespace std;

int *pInt = new int; // int Ÿ���� �������� �Ҵ�
char *pChar = new Char; // char Ÿ���� ���� ���� �Ҵ�
Circle *pCircle = new Circle(); // Circle Ŭ���� Ÿ���� ��ü �Ҵ�

delete pInt; // �Ҵ���� �������� ��ȯ
delete pChar; // �Ҵ���� �������� ��ȯ
delete pCircle; // �Ҵ���� ��ü���� ��ȯ

int *p = new int; // �����κ��� int Ÿ���� ���� ���� �Ҵ�
if(!p){ // if(p==NULL)�� ����. p�� NULL�̸�
    return; // �޸� �Ҵ�ޱ� ����
}
*P = 5; // �Ҵ���� ���� ������ 5 ���
int n = *p; // �Ҵ���� ���� �������� �� �б�, n = 5
delete p; // �Ҵ���� ���� ���� ��ȯ