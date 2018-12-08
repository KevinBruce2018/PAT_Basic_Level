#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int*)b - *(int*)a;
}
int main(void)
{
	int n,a[100],vis[100]={0},result[100],count=0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
		scanf("%d",&a[i]);
	for(int i = 0;i < n;i++)
	{
		int temp = a[i];
		if(vis[i]==0)
		{
			while(temp != 1)
			{
				for(int j = 0;j < n;j++)
					if(j!=i && a[j]==temp)
						vis[j] = 1;
				temp = temp%2==0?temp/2:(3*temp+1)/2;
			}
		}
	}
	for(int i = 0;i < n;i++)
		if(vis[i] == 0)
			result[count++] = a[i];
	qsort(result,count,sizeof(result[0]),cmp);
	for(int i = 0;i < count-1;i++)
		printf("%d ",result[i]);
	printf("%d\n",result[count-1]);
	return 0;
}
