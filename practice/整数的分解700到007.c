#include <stdio.h>
int main()
{
	int each,input;
	scanf("%d",&input);
	
	do{
		each = input % 10;
		input/=10;
		printf("%d",each);
	}while(input!=0);
	
	return 0;
}