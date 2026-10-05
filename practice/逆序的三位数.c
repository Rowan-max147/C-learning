#include <stdio.h>
int main()
{
	int a,a1,a2,a3;
	printf("请输入一个正3位数:");
	scanf("%d",&a);
	
	a1=a%10;
	a3=a/100;
	a2=(a%100-a1)/10;
	printf("逆序的数为%d",a1*100+a2*10+a3);
	
	return 0;
}