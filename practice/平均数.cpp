#include <stdio.h>
int main()
{
	double a=0;
	double b=0;
	
	printf("请输入两个数:");
	scanf("%lf %lf",&a,&b);
	
	printf("%.2f和%.2f的平均数为:%.2f",a,b,(a+b)/2);
	
	return 0;
	
}
