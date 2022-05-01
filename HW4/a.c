#include<stdio.h>
#include<stdlib.h>

int main(void)
{

unsigned long long num ;                //要輸入的值 假設為：1123
int count=0 ;                           //算出幾位數字

while (scanf("%llu", &num) != EOF)      //這邊進行輸入  因為最大值18446744073709551615超過long 所以要用long long
{                                       //多筆測資左大括弧
if (num == 0)                           // num = 0 輸出 ZERO
{                                       // if 左大括弧
    printf("ZERO\n");
}                                       // if 右大括弧
else                              
{                                       // else 左大括弧
num = (float)num / (float)10;                         //112.3 = 1123 /10 
count = count +1;                       //只要除10一次，count就會加上1     count  = 1 = 0+1


while (num > 0)                         //*重要* 只要num / 10  >0 就要繼續除
    {
        num = (float)num / (float)10;                 //11.23 = 112.3/10
        count = count + 1;              //只要除10一次，count就會加上1     count  = 2  = 1+1 
    }

printf("%d\n", count);                  //印出計算出的次數
}                                       //if else 右大括弧

count=0 ; 
}                                       //多筆測資右大括弧
return 0;
}
