#include<stdio.h>

int main(void)
{
	char a[101],*out[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum = 0,b[3]={0},i=0;
	scanf("%s",a);
	for(int i = 0;a[i]!='\0';i++)
		sum += a[i] - 48;
    while(sum!=0)
    {
        b[i] = sum%10;
		sum /= 10;
		i++;
    }
	for(i=i-1;i>0;i--)
		printf("%s ",out[b[i]]);
	printf("%s\n",out[b[i]]);

	return 0;
}
