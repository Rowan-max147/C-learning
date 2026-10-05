#include <stdio.h>
int main()
{
	int n;
	int factor = 1;
	
	printf("请输入n的值:");
	scanf("%d",&n);

    for(int i=n;i>=2;i--){
    	factor*=i; 
}
	printf("n的阶乘为%d",factor);
	return 0; 
}