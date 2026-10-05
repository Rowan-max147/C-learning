/*#include <stdio.h>
int main()
{
	int sum=0;
    int i;
	
    for(i=1;i<=10;i++){
    	sum+=i;
	}
	printf("%d\n",sum);
	for(i=20;i<=30;i++){
    	sum+=i;
	}
	printf("%d\n",sum);
	for(i=35;i<=45;i++){
    	sum+=i;
	}
	printf("%d\n",sum);
	
	
	return 0;
}*/
#include <stdio.h>
void sum(int begin,int end);//声明
int main()
{
	sum(1,10);
	sum(20,30);
	sum(35,45);
	
	return 0;
}
void sum(int begin,int end)//定义
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d\n",sum);
 } 
