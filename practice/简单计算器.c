/*模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。
输入格式：
输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。
输出格式：
在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。*/
#include <stdio.h>
int main()
{
	int result,b;
	char a;
	scanf("%d",&result);
	while(1)//while(1)代表无限循环，需要个break跳出循环
	{   
		scanf("%c",&a);
	    if(a=='='){
	    	break;
		}
		scanf("%d",&b);
	    if(a=='+'){
	    	result+=b;
		}
		else if(a=='-'){
			result-=b; 
		}
		else if(a=='*'){
		    
			 result*=b;
		}
		else if(a=='/'){
		if(b==0){
			printf("ERROR");
			break;
		}
		else result/=b;
		}
		else{
		 printf("ERROR");
		 break;//错误的时候要加个break跳出循环
	}
		
	}
	printf("%d",result);
	return 0;
}