#include <stdio.h>
int main()
{
	int A;
	int B;
	int X,Y,Z,W;
	
	printf("请输入两个数:");
	scanf("%d %d",&A,&B);
	X=A+B;
	Y=A-B;
	Z=A*B;
	W=A/B;
	printf("X=%d,Y=%d,Z=%d,W=%d",X,Y,Z,W);
	
	return 0;
}