#include <stdio.h>

int main(void) 
{
  unsigned long long n1;    //超過int，改unsigned long long
  unsigned long long n2;    //超過int，改unsigned long long
  unsigned long long n3;    //超過int，改unsigned long long
  int i;                    //比較值
  int N;                    //輸入的值

  //N=5 會印出N+1筆資料  
  while(scanf("%d", &N)!=EOF) 
  {
    n1=0;
    n2=1;
    printf("%llu %llu",n1, n2);  //印出第1筆資料 印出第2筆資料

    for(i=3; i<=N+1; i++)         //舉例N=3 印出3+1=4筆，
    {
      n3 = n2 + n1;        
      printf(" %llu", n3);        //印出第3筆資料
      n1 = n2;              
      n2 = n3;
    }
  printf("\n");                   //input結果跑完，會斷行

  }
  
  return 0;
}