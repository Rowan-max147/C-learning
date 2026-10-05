#include <stdio.h>
int main ()
{
	int foot = 0;
	int inch = 0;
	
	printf("请输入几尺几寸，例如\"5 7\"代表五尺七寸:");
	scanf("%d %d",&foot,&inch);
	
	printf("您的身高为%f米",(foot + inch/12.0)*0.3048);
	
	return 0;
}