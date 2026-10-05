#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand()%100+1;
	int n = 0;
	int number;
	
	printf("我已经想好了一个1到100之间的数");
	
	do{
		printf("你来猜猜这个数是多少:");
		scanf("%d",&number);
		n++;
		if(number>a){
			printf("你猜的数大了");
		}
		else if(number<a){
		printf("你猜的数小了");
		}
	}while(a!=number);
	
	printf("你用了%d次猜到了结果",n);
	return 0;
	
}