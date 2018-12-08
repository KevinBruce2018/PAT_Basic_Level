#include<stdio.h>
int main(void)
{
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N/100;i++)
        printf("B");
    for(i=0;i<(N%100)/10;i++)
        printf("S");
    for(i=1;i<=N%10;i++)
        printf("%d",i);
    return 0;
}
