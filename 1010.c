#include<stdio.h>
int main(void)
{
    int m,n,cou=0;
    int a[1000],b[1000];
    while(~scanf("%d %d",&m,&n))
    {
        if(n!=0)
        {
            a[cou++]=m*n;
            b[cou-1] = n-1;
        }
    }
    for(int i = 0;i < cou-1;i++)
        printf("%d %d ",a[i],b[i]);
    printf("%d %d\n",a[cou-1],b[cou-1]);
    return 0;
}
