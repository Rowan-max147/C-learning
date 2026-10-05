#include <stdio.h>
int isPrime(int x,int knownPrime[],int length){//这里需要一个数组和一个length作参数是因为下面判断素数做准备，数组中是已知的素数，上下两个函数结合才能得出这个knownPrime[]
	int ret=1;
	int i;
	for(i=0;i<length;i++){
		if(x%knownPrime[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
}
int main()
{
	const int number=100;
	int prime[number];
	prime[0]=2;
	int count = 1;
	int i=3;
	while(count<number){
		if(isPrime(i,prime,count)){
			prime[count++]=i;
		}
		i++;
	}
	for(i=0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5){
			printf("\t");
		}
		else printf("\n");
	}
	return 0;
}