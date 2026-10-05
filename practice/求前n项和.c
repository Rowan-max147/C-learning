#include <stdio.h>
int main(){
	int i=1;
	int n;
	double sum = 0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i+=2){
		sum+=1.0/i;
	}
    for(i=2;i<=n;i+=2){
		sum-=1.0/i;
	}
	printf("%lf",sum);
	return 0;
}