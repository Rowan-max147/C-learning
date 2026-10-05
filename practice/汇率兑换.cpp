#include <stdio.h>
int main()
{
	int dollar = 0;
	double RMB = 0;
	
	printf("请输入美金数:");
	scanf("%d",&dollar);
	RMB = dollar*6.451;
    printf("对应的人民币为%.2f",RMB);
	
	return 0;
}