//中国有句俗语叫“三天打鱼两天晒网”。假设某人从某天起，开始“三天打鱼两天晒网”，问这个人在以后的第N天中是“打鱼”还是“晒网”？
//输入格式：
//输入在一行中给出1个不超过1000的正整数N。
//输出格式：
//在一行中输出此人在第N天中是“Fishing”（即“打鱼”）还是“Drying”（即“晒网”），并且输出“in day N”。
#include <stdio.h>
int main(){
	int N = 0;
	int choice = 0;
	printf("请输入天数:");
	scanf("%d",&N);
	choice = N % 5;
	if(choice>=1&&choice<=3){
		printf("Fishing in day %d",N);
	}
	else{
		printf("Drying in day %d",N);
	}
	
	return 0;
}
