#include <stdio.h>
int main()
{
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	
	printf("请输入第一个时间(小时 分钟,空格隔开):");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入第二个时间(小时 分钟，空格隔开):");
	scanf("%d %d",&hour2,&minute2);
	
	int a=0,b=0;
	a=hour1*60+minute1;
	b=hour2*60+minute2;
	
	int timedelta = 0;
	timedelta = a-b;
	
	printf("时间差是%d小时%d分。",timedelta/60,timedelta%60);
	
	return 0;
}