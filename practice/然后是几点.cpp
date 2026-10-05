#include <stdio.h>
int main()
{
	int time1,pass,time2;
	printf("请输入起始时间(如输入1106代表11点零6分)和流逝的分钟数:");
	scanf("%d %d",&time1,&pass);
	
	time2=time1/100*60+time1%100+pass;
	printf("终止时间为%d",time2/60*100+time2%60);
	
	return 0;
}