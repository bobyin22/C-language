#include<stdio.h>
int main(void)

//-----------------------------------------------------------------------
//當N=3時
// {
// int N=3;
// int j;
// //頭
// for (j=1; j<=N; ++j) {
//     printf("*");
// }
// printf("\n");

// //中
// printf("*");
// for (j=1; j<=N-2; ++j) {
//     printf(" ");
// }
// printf("*\n"); //這個是第二行最後一顆星星

// //尾
// for (j=1; j<=N; ++j) {
//     printf("*");
// }
// printf("\n");
//印出
// ***
// * *
// ***
//-----------------------------------------------------------------------

//-----------------------------------------------------------------------
//N=5時
// {
// int N=6;
// int i, j;
// //頭
// for (j=1; j<=N; ++j) {
//     printf("*");
// }
// printf("\n");

// //中
// for (i=1; i <= N-2; ++i) {
//     printf("*");
//     for (j = 1; j<= N-2; ++j) {
//         printf(" ");
//     }
//     printf("*\n"); //這個是第二行最後一顆星星
// }


// //尾
// for (j=1; j<=N; ++j) {
//     printf("*");
// }
// printf("\n");
//印出
// ***
// * *
// ***
//-----------------------------------------------------------------------
// {
//     int N;
//     printf("N =");
//     scanf("%d", &N);

//     int i, j;                       //i是x橫軸 j是y縱軸
//     for (i= 1; i<= N; ++i) {
//         for (j = 1; j <= N; ++j) {
//             /*每個問號要決定是要印星號或是印空白 */
//             printf("?");
//         }
//         printf("\n");
//     }
//印出
// N =5
// ?????
// ?????
// ?????
// ?????
// ?????
//-----------------------------------------------------------------------
{
    int N;
    printf("N =");
    scanf("%d", &N);

    int i, j;                       //i是x橫軸 j是y縱軸
    for (i= 1; i<= N; ++i) {
        for (j = 1; j <= N; ++j) {
            if (i==1 || i==N || j==1 || j==N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    } 
// N =5
// *****
// *   *
// *   *
// *   *
// *****
    return 0;
}