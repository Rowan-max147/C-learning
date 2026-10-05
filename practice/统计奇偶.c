//统计奇偶
//连续输入正整数，输入 0 结束。输出：输入的偶数个数、奇数个数、所有数的总和。
#include <stdio.h>
int main(){
	int input;
	int sum = 0;
	int count1 = 0;
	int count2 = 0;	
	printf("请输入正整数(输入0结束)：");
	scanf("%d",&input);
    while(input!=0){
    	sum+=input;
    	if(input%2!=0){
    	count1++;  	
	}
	else {
		count2++;
	}
		printf("请输入正整数(输入0结束):");
    	scanf("%d",&input);
}
    if(input == 0){
    	printf("输入的偶数个数为0，奇数个数为0，和为0");
	}
	else{
		printf("输入的偶数个数为%d\n",count2);
		printf("输入的奇数个数为%d\n",count1);
		printf("所有数的总和为%d\n",sum);
	}
	
	return 0;
}