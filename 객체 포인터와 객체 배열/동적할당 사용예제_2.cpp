#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int num[5];
    int i, max=0;

    for(i=0; i<5; i++){
        printf("���� �Է�: ");
        scanf("%d", &num[i]);
    }

    max = num[0];

    for(i=1; i<5; i++){

        if (max < num[i])
            max = num[i];
    }

    printf("���� ū ���� : %d", max);

    return 0;
}