#include <stdio.h>
int main()
{
	int a,b,c;
	int t;
	
	scanf("%d",&t);
	a=t/100;
	b=t/10-a*10;
	c=t%10;
	printf("%d",c*100+b*10+a);
	
	return 0;
}