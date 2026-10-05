#include <stdio.h>
int main()
{
	const double g = 9.8;
	double h,v0,t;
	
	printf("请依次输入初速度和时间:");
	scanf("%lf %lf",&v0,&t);
	
	h = v0*t-1.0/2.0*g*t*t;
	printf("小球的高度为%.4f米",h);
	
	return 0;
}