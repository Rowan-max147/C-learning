#include <stdio.h>
int main()
{
	int result,input,each;
	scanf("%d",&input);
	while(input!=0){
	each = input % 10;
	input/=10;
	result = result*10 + each;
}
    if(input = 0){
    	result = 0;
    	printf("0");
	}
	else {
		printf("%d",result);
	}
    return 0;
}