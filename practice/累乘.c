#include <stdio.h>
int main(){
	int x,n;
	int p=1;
	
	scanf("%d %d",&x,&n);
	while(n>0){
		p*=x;
		n--;
	}
	printf("%d\n",p);
	
	return 0;
}