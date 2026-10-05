#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入a和b:");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("大的数为a");
	}
	else{
		printf("大的数为b");
	}
	return ;
}