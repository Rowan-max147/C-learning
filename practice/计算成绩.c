#include <stdio.h>
int main()
{
	const int pass = 60;
	int score = 0;
	
	printf("请输入得分:");
	scanf("%d",&score);
	if(score>=pass)
	printf("恭喜你通过考试");
	else
	printf("很遗憾您未能通过考试");
	printf("再见");
	
	return 0;
}