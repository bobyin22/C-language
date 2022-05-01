#include <stdio.h>

int main(void) 
{
  int input_cola;                              //輸入input_cola
  int divident, remainder;                     //被除數 商divident，餘數remainder
  int extra_cola;                              //送了哪幾瓶可樂 extra_cola

  while(scanf("%d", &input_cola)==1)           //當scanf成功讀取    『執行迴圈』
  {
    extra_cola = 0;                            //初始設定 送可樂為0
    divident = input_cola;                     //把輸入可樂值 賦值給 商
    while(divident >=3)                        //當被除數 大於 3    『執行迴圈』
    {
    remainder = divident % 3;                  //餘數remainder  = 被除數 % 3
    divident = divident / 3;                   //商divident     = 被除數 / 3
    extra_cola = extra_cola + divident;        //送的可樂 = 送的可樂 + 商
    divident = remainder + divident ;          //下一行 = 上一行的餘數 + 上一行的商
    }
    if(divident==2)                            //如果商 等於 2
    {
      extra_cola = extra_cola +1;              //商等於2 代表目前有2瓶 『可以借1空罐』，湊成3罐兌換1新可樂
    }

    printf("%d\n", extra_cola + input_cola);   //最後喝了幾瓶可樂 = 一開始輸入瓶數＋送了幾瓶
  }

  return 0;
}