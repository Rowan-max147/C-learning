/*水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 13 + 53+ 33。本题要求编写程序,计算所有N位水仙花数。
输入格式：
输入在一行中给出一个正整数N（3<=N<=7）。
输出格式：
按递增顺序输出所有N位水仙花数，每个数字占一行。*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t = 1;
	int p = 1;
	while(t<n)
	{
		p*=10;
		t++;
	}
	
	int k = p;
	do{ int sum=0;
		int i = k;
	    do{	int d=i%10;
		i/=10;
		int count = 0;
		int j =1;
		do{
			j*=d;
			count++;
		}while(count<n);	
		
		sum+=j;
		}while(i>0);
		if(sum==k){
			printf("%d\n",k);
		}
		k++;
	}while(k<p*10);
	
	
	return 0;
}
