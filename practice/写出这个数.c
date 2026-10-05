/*读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。
输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1空格，但一行中最后一个拼音数字后没有空格。*/
#include <stdio.h>
void f(int a)
{
	int t=a;
	int mask=1;
	while(t>9){//判断位数记得少加一位
		mask*=10;
		t/=10;
	}
	int d;
	do{
		d=a/mask;
		a%=mask;
		mask/=10;
		switch(d){
			case 0:
			printf("ling");
			break;
			case 1:
			printf("yi");
			break;
			case 2:
			printf("er");
			break;
			case 3:
			printf("san");
			break;
			case 4:
			printf("si");
			break;
			case 5:
			printf("wu");
			break;
			case 6:
			printf("liu");
			break;
			case 7:
			printf("qi");
			break;
			case 8:
			printf("ba");
			break;
			case 9:
			printf("jiu");
			break;
		}
	    if(mask>0){
		  printf(" ");
	}
	}while(mask>0);
	
}
int main()
{
	char c;
	int sum=0;
	c=getchar();
	while(c>='0'){
		sum+=c-'0';
		c=getchar();
	}
	f(sum);
	return 0;
}