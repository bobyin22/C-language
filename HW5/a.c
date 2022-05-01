#include <stdio.h>
int main()
{

  int i,j,N,space;
  while(scanf("%d", &N)!=EOF)
  {

    if(N%2!=0)
    {

  
      for(i=1; i<=N; i++)
      {
        for(space=1; space<=(N-i) ;space++)
        {
          printf(" ");
        }

        for(j=1; j<=(2*i-1) ;j++)
        {
          printf("*");
        }
      printf("\n");
      }


  
    for(i=N-1; i>=1; i--)  
    {
      for(space=1; space<=(N-i); space++) 
      {
        printf(" ");
      }

      for(j=1; j<=(2*i-1); j++)   
      {
        printf("*");
      }
      printf("\n");
    }

  }
  else
  {
    //上面滿滿一行
    for(j=1; j<=N*2-1; j++)
    {
      printf("*");
    }
    printf("\n");

    //空心菱形上半
    for(i=1; i<N-1; i++)
    {
    for(space=1; space<=(N-i) ;space++)
    {
      printf("*");
    }

    for(j=1; j<=(2*i-1) ;j++)
    {
      printf(" ");
    }
     for(space=1; space<=(N-i) ;space++)
    {
      printf("*");
    }

    printf("\n");
    }
    
    
    //下方菱形空心
    for(i=N-1; i>=1; i--) 
    {
      for(space=1; space<=(N-i); space++)  
      {
        printf("*");
      }

      for(j=1; j<=(2*i-1); j++)
      {    
      printf(" ");
      }
      
     for(space=1; space<=(N-i); space++)  
      {
      printf("*");
      }
      printf("\n");
    }
    
    //下面滿滿一行
    for(j=1; j<=N*2-1; j++)
    {
      printf("*");
    } 
    printf("\n");

  }
}
  return 0;
}