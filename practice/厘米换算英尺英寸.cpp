#include <stdio.h>
int main()
{
	int cm;
	printf("请输入正整数(cm):");
	scanf("%d",&cm);
	int inch,foot;
	foot = cm/30.48;
	inch = (cm/30.48-foot)*12;
	printf("对应的英制长度为%d尺%d寸",foot,inch);
	return 0;
}