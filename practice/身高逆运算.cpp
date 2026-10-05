#include <stdio.h>
int main()
{
	int foot,inch;
	int cm;
	
	scanf("%d",&cm);
	
	foot = cm/30.48;
	inch = (cm/30.48-foot)*12;
	printf("%d %d",foot,inch);
	
	return 0;
	
}