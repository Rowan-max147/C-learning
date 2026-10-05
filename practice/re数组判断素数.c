#include <stdio.h>
int isPrime(int x,int knownPrime[],int length);
int main()
{   const int number=100;
	int prime[number];
	prime[0]=2;
	int count=0;
	int i=3;
	while(count<number){
		if(isPrime(i,prime,count)){
			prime[count++]=i;
		}
		i++;
	}
	for(i=0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5)printf("\t");
		else printf("\n");
}
    return 0;
}
int isPrime(int x,int knownPrime[],int length){
	int ret=1;
	int i;
	if(x<2){
		ret=0;
	}
	for(i=0;i<length;i++){
		if(x%knownPrime[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
}