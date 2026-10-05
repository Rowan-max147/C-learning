#include <stdio.h>
int main()
{
	const int number=100;
	int prime[100];
	for(int i=0;i<number;i++){
		prime[i]=1;
	}
	
	int x;
	for(x=2;x<number;x++){
		int isPrime=1;
		for(int i=2;i<x;i++){
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime){
			for(int k=2;k*x<number;k++){
				prime[k*x]=0;
			}
		}
	}
	for(int i=2;i<number;i++){
		if(prime[i]){
			printf("%d\n",i);
		}
	}
	
	return 0;
}