/*#include <stdio.h>
int main(){
	int a,b;
	int ret,min;
	
	scanf("%d %d",&a,&b);
	if(a>b){
		min = b;
	}else min = a;
	
	for(int i=min-1;i<min;i--){
		if(a%i==0){
			if(b%i==0){
			ret = i;
			printf("%d和%d的最大公约数为%d",a,b,ret);
			break;}
		}
	}
	return 0;
}*/
#include <stdio.h>
int main(){
	int a,b;
	int t = 0;
	
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("a和b的最大公约数为%d",a);
	
	return 0;
	
}