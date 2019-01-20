#include<stdio.h>

int main(void)
{
	int p=0,t=0,a=0,n,flag=0;
	char s[9][101];
	int a1=0,a2=0,a3=0,j=0;

	scanf("%d\n",&n);

	for(int i = 0;i < n;i++)
	{
		scanf("%[^\n]%*c",s[i]);

		for(j = 0;s[i][j] !='\0';j++)
		{
			switch(s[i][j])
			{
				case 'P':
					p++;
					break;
				case 'A':
					a++;
					break;
				case 'T':
					t++;
					break;
				default:
					flag = 1;
					break;
			}
		}
		
		if(flag || a==0 || p==0 || t==0 )
			printf("NO\n");
		else
		{
			for(j = 0;s[i][j] != 'P';j++)
				a1++;
			for(j=j+1;s[i][j] !='T';j++)
				a2++;
			for(j=j+1;s[i][j] !='\0';j++)	
				a3++;

			if(a1* a2 == a3)
				printf("YES\n");
			else
				printf("NO\n");
		}

		flag = 0,a=0,p=0,t=0,a1=0,a2=0,a3=0;
	}
	return 0;

}
