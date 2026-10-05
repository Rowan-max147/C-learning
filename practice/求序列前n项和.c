/*本题要求编写程序,计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。
输入格式：
输入在一行中给出一个正整数N。
输出格式：
在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。*/
#include <stdio.h>
int main()
{
	double i=2;
	double j=1;
	double t;
	int n;
	scanf("%d",&n);
	double sum = 0.0;
    for(int cnt=1;cnt<=n;cnt++){
    	sum+=i/j;
    	t=i;
    	i=i+j;
    	j=t;
	}
	printf("%.2f\n",sum);
	
	return 0;
}