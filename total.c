#include <stdio.h>

int main()
{  
    int K;
    int b, sum;
    printf("How many have cat?");
    scanf("%d",&K);
    printf("How many have dog?");
    scanf("%d",&b);
    sum = K+b;
    printf("足し算の結果は %d です。\n", sum);
    return 0;
}