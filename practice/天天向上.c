#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,f,c;
	const double base = 1.0;
	
	printf("请输入提高值:");
	scanf("%lf",&f);
	
	a=pow(base+f*0.001,365);
	b=pow(base-f*0.001,365);
	c = a - b;
	
	printf("能力值的差距为%.2f",c);
	
	return 0;
}