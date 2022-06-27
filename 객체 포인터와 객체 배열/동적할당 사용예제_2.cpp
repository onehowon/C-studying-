#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int num[5];
    int i, max=0;

    for(i=0; i<5; i++){
        printf("숫자 입력: ");
        scanf("%d", &num[i]);
    }

    max = num[0];

    for(i=1; i<5; i++){

        if (max < num[i])
            max = num[i];
    }

    printf("가장 큰 수는 : %d", max);

    return 0;
}