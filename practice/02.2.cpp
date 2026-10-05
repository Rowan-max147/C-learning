#include <stdio.h>
int main()
{
	int start,pass;
	scanf("%d %d",&start,&pass);
	int result;
	result = (start/100*60+start%100+pass)/60*100+(start/100*60+start%100+pass)%60;
	printf("%d",result);
	
	return 0;
}