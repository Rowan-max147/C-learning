#include <stdio.h>

int main()
{
	const int amount = 100;
	int price = 0;
	
	printf("请输入金额:");
	scanf("%d",&price);
	
	int change = amount - price;
	printf("%d\n",change);
}