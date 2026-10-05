#include <stdio.h>
int main()
{
	int a = 0;
	
	printf("请输入一个正整数:");
	scanf("%d",&a);
	
	printf("百位数字为%d",a/100%10);
	
	return 0 ;
}