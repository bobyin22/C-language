#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int input_number;                                                       //設input_number     為輸入用的       變數
int caculate_input_number;                                              //設caculate_number  為計算用的       變數
int count=0;                                                            //設count            為步驟            數
int Max_input_number=0;                                                 //設Max_input_number 為印出用 最大輸入 變數
int Max_count=0;                                                        //設Max_count        為印出用 最大計算 變數

while(scanf("%d", &input_number) !=EOF){                                //多筆測資  第一層while 多筆測資 迴圈開始
count = count +1 ;                                                      //剛輸入 就開始算 第一步
caculate_input_number = input_number;                                   //給input_number 給 caculate_number 去計算

    while (caculate_input_number != 1){                                 //當caculate_number不是1 迴圈繼續跑   第二層while 輸入數字不等於0 迴圈開始  
        if (caculate_input_number % 2 == 0){                            //如果 caculate_number 是偶數                
            caculate_input_number = caculate_input_number / 2;          //如果 caculate_number 是偶數，要除2           
        }
        else {                                                          //如果 caculate_number 不是偶數              
            caculate_input_number = (caculate_input_number * 3) + 1;    //如果 caculate_number 不是偶數，要*3 再+1   
        }
            count = count + 1;                                          //每次執行 奇數或偶數 運算一次 count+1                                                                   
        if (count >= Max_count){                                        //當新輸入的步驟 大於 原本目前最大步驟      ex 20步驟  輸入值是13
            Max_count = count;                                          //新輸入的步驟  賦值給 目前最大步驟        ex 把20步驟換成 印出      
            Max_input_number = input_number;                            //新輸入的輸出值 賦值給 目前最大輸出值      ex 把原本輸入值9 取代用 13輸入值
        }
        if (caculate_input_number >= Max_input_number){                 //在上一層if 步驟已更換的狀況下
            Max_input_number = caculate_input_number;    
        }                                            
    }                                                                   //第二層while 輸入數字不等於0 迴圈結束                                                         
count = 0;                                                              //因為每次印出 步驟最多數字   最多步驟 後要歸0，下一個比較時 不會累加到   
}                                                                       //第一層while 多筆測資 迴圈結束

printf("%d %d\n", Max_input_number, Max_count);                         //印出 最大輸出值, 最大步驟 
return 0;
}