#include <stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int digit,result;
	
	do{
		digit=x%10;
		x/=10;
		result=result*10+digit;
	}while(x>0);
	printf("%d",result);
	
	return 0;
}