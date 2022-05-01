#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;                 //學生人數
    float sum = 0;              //學生身高總和
    float score ;               //學生個別身高 
    int count = 0;              //要除數的個數  
    float average;              //平均身高   sum/count

    scanf("%d", &number);       //輸出 學生人數   輸入有幾個學生 (輸入人數 等於 number筆數時 quit):

    while (number !=0 ) {       //只要人數不等於0就會一直跑while迴圈
        scanf("%f", &score);
        sum = sum + score;      //總和為 每次輸入
        count = count + 1;      //每次加一個number 就紀錄一個count
        
        number = number -1;     //這邊很重要，break的條件
    }
    
    average = sum / count ; 
    printf("%.2f\n", average) ;
    return 0 ;
}