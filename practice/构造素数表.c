#include <stdio.h>
int  isPrime(int x);
int main()
{
    const int n=100;
	int prime[n];
	for(int i=0;i<n;i++){
		prime[i]=1;
	}
	int x=2;
	for(;x<n;x++){	
		if(isPrime(x)){
			for(int k=2;k*x<n;k++){
				prime[k*x]=0;
			}
		}
}
	for(int i=2;i<n;i++){
		if(prime[i]){
			printf("%d\t",i);
		}
	}
	return 0;
}
int isPrime(int x){
	int ret=1;
	if(x<2){
		ret=0;
	}
	for(int i=2;i<x;i++){
		if(x%i==0){
			ret=0;
		}
	}
	return ret;
}