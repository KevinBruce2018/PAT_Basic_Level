#include<stdio.h> 
int main(void)
{
  int x,a=0;
  scanf("%d",&x);
  while(x!=1)
  {
      x = x%2==0?x/2:(3*x+1)/2;
      a++;
  }
  printf("%d\n",a);
  return 0;
}
