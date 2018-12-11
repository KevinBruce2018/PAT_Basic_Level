#include<stdio.h>
#include<math.h>
int prime(int N)
{
	int prime=3,flag=0,num=0;
	for(int i = 4;i <= N;i++)
	{
		for(int j = 2;j <= sqrt(i);j++)
			if(i%2==0 || i%j==0) {
				flag = 1;
				break;
			}
		if(!flag) {
			num += ((i-prime)==2?1:0);
			prime = i;
		}
		flag = 0;
	}
	return num;
}
int main(void)
{
	int N;
	scanf("%d",&N);
	printf("%d",prime(N));
	return 0;
}
