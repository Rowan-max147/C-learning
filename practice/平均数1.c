#include <stdio.h>
int main()
{
	int sum = 0;
	int count = 0;
	int number;
    double average;
    
    printf("请输入一个数:");
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		printf("请输入一个数:");
		scanf("%d",&number);
	} 
	if(count==0){
		printf("未输入有效数字");
	}
    else{
	    average = 1.0*sum/count;
    	printf("%f",average);
    }
	return 0;
} 