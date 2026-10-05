#include <stdio.h>
int main()
{
	int i,j,t;
	scanf("%d/%d",&i,&j);
	int a = i,b = j;
	do{
		t=a%b;
		a=b;
		b=t;
	}while(b>0);
	
	i/=a;
	j/=a;
	
	printf("%d/%d",i,j);
	
	return 0;
}