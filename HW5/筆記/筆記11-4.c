#include<stdio.h>

int main(void) {
int N;
printf("N = ");
scanf("%d", &N);

int i, j;
for (i=1; i<=N; ++i) {              //i=1,2,3
    for (j = 1; j <= i; ++j) {
        printf("*");                //印 i 個星星
    }
    printf("\n");                   //換行
}
return 0 ;
}

// N = 3
// *
// **
// ***

// N = 5
// *
// **
// ***
// ****
// *****