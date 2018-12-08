#include<stdio.h>
#include<math.h>
typedef struct NUMBER{
    long first,second;
}number;
int gcd(long a,long b)
{
    return a%b==0?b:gcd(b,a%b);
}
void yuefen(long* a,long *b)
{
    long tmp = fabs(gcd(*a,*b));
    *a/=tmp;
    *b/=tmp;
}
void solve(long a,long b)
{
    int flag=0;
    if(!a)
        printf("0");
    else
    {
        if(a<0) {
            printf("(-");
            a = -a;
            flag = 1;
        }
        if(a/b>0 && a%b!=0)
            printf("%ld %ld/%ld",a/b,a%b,b);
        else if(a/b>0 && a%b==0)
            printf("%ld",a/b);
        else
            printf("%ld/%ld",a,b);
        if(flag==1)
            printf(")");
    }
}
void total(int i,number num1,number num2)
{
    number rst;
    printf(" = ");
    if(i==0)
    {
        long tmp = fabs(gcd(num1.second,num2.second));
        rst.second = tmp = num1.second*num2.second/tmp;
        rst.first = num1.first*tmp/num1 .second + num2.first*tmp/num2.second;
        yuefen(&rst.first,&rst.second);
    }
    if(i==1)
    {
        long tmp = fabs(gcd(num1.second,num2.second));
        rst.second = tmp = num1.second*num2.second/tmp;
        rst.first = num1.first*tmp/num1.second - num2.first*tmp/num2.second;
        yuefen(&rst.first,&rst.second);
    }
    if(i==2)
    {
        rst.first = num1.first*num2.first;
        rst.second = num1.second*num2.second;
        yuefen(&rst.first,&rst.second);
    }
    if(i==3)
    {
        if(num2.first==0) {
            printf("Inf");
            return;
        }
        else
        {
            rst.first = num1.first*num2.second;
            rst.second = num1.second*num2.first;
            yuefen(&rst.first,&rst.second);
            rst.first = rst.second<0?-rst.first:rst.first;
        }
    }
    solve(rst.first,fabs(rst.second));
}
int main(void)
{
    char op[5]="+-*/";
    number numb1,numb2;
    scanf("%ld/%ld %ld/%ld",&numb1.first,&numb1.second,&numb2.first,&numb2.second);
    if(numb1.first!=0)
        yuefen(&numb1.first,&numb1.second);
    if(numb2.first!=0)
        yuefen(&numb2.first,&numb2.second);
    for(int i = 0;i < 4;i++){
        solve(numb1.first,numb1.second);
        printf(" %c ",op[i]);
        solve(numb2.first,numb2.second);
        total(i,numb1,numb2);
        printf("\n");
    }
    return 0;
}
