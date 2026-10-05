/*让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，
因为它有2个“百”、3个“十”、以及个位的4。
输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。
输出格式：每个测试用例的输出占一行，用规定的格式输出n。*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int hundred=n/100;
	int one=n%10;
	int ten=n/10%10;
	
	int i;
	for(i=0;i<hundred;i++){
		printf("B");
	}
	for(i=0;i<ten;i++){
		printf("S");
	}
	for(i=1;i<=one;i++){
		printf("%d",i);
	}
	
	return 0;
}