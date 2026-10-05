#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	
	printf("请输入两个数字:");
	scanf("%d %d",&a,&b);
	
	printf("%d/%d=%d\n",a,b,a/b);
	
	return 0;
}