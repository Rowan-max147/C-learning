#include <stdio.h>
int main(){
	int n;
	int count[10];
	int i;
	for(i=0;i<10;i++0){
		count[i]=0;
	}
	scanf("%d",&n);
	while(n!=-1){
		if(n>=0&&n<=9){
			count[n]++;
		}
		scanf("%d",&n);
	}
	for(i=0;i<10;i++){
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
}