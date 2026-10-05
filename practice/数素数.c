/*令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。
输入格式：
输入在一行中给出M和N，其间以空格分隔。
输出格式：
输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。*/
#include <stdio.h>
int main()
{
	int m,n;
	int cnt=0;
	scanf("%d %d",&m,&n);
	int i;
	int number;
	for(number=2;;number++){
		int isPrime=1;
		for(i=2;i<number;i++){
			if(number%i==0){
				isPrime=0;
			}
		}
		
		if(isPrime==1){
			cnt++;	
			int t=cnt-m+1;	
			if(cnt>=m&&cnt<=n){
				printf("%d",number);
				if(cnt==n){
				break;
			}
				if(t%10==0){
					printf("\n");
				}
				else printf(" ");
				}
			}
	}
	
	return 0;
}