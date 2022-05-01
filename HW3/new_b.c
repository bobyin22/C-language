#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temp;                                               //暫時借 數值變換的 變數
    int dividend;                                           //被除數
    int divisor;                                            //除數
    int remainder;                                          //餘數
    int gcd;                                                //最大公因數

     while (scanf("%d%d",&dividend, &divisor) != EOF)       //如果不加" != EOF"，程式是死迴圈。加入了話 終端不進行輸入該程式會自動結束
     {                                                      //多筆測資左大括號
     
     if(dividend<divisor)                                   //希望第一筆是被除數ex168   第二筆是除數ex60       ex 168被除數/ 60除數 =48餘數  
     {    temp = dividend;
          dividend = divisor;
          divisor = temp;
     }
        if(dividend ==0 || divisor==0)                      //當input其中一個為0，最大公因數就是0
            {
                printf("0\n");
            }
        else {                                              //重要 這邊是if else (dividend ==0 || divisor==0) 的右大括弧

     remainder = dividend % divisor ;                       //被除數是168    除數是60   餘數是48

     //輾轉相除法開始
     while ( remainder != 0 )                              //當餘數沒有整除繼續做  remainder != 0
     {
         dividend  = divisor ;                              //上一個動作的除數divisor是60 現在要變成 被除數dividend是60    
         divisor   = remainder ;                            //上一個動作的餘數remainder是48 現在要變成 被除數dividend48
         remainder = dividend % divisor ;                   //繼續執行相除找餘數動作   
     }
     //輾轉相除法結束   
      
     gcd = divisor ;
     printf("%d\n", gcd);                                   //印出最大公因數        第一次就整除 或是 迴圈結束 都會跑到這
                   
    }                                                       //多筆測資右大括號
    
    }                                                       //重要 這邊是if else (dividend ==0 || divisor==0) 的右大括弧
    return 0;
}