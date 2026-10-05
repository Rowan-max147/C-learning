#include <stdio.h>
#include <math.h>

int main()
{
	const int n =5;
	double i,F,P;
	printf("请输入本金金额(元):");
	scanf("%lf",&P);
	
	i=0.0175;
	F = P*pow(1+i,n);
	printf("第一种方式五年后的得款总额为%.2f\n",F);
	
	i=0.0275;
	F = P + P*i*n;
	printf("第二种方式五年后的得款总额为%.2f",F);
	
	return 0 ;
}