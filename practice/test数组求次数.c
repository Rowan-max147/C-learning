#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int count[10];
	int i;
	for(i=0;i<=9;i++){
		count[i]=0;
	}
	while(n!=-1){
		if(n>=0&&n<=9){
			count[n]++;
		}
		scanf("%d",&n);//不放在if里防止输入其他数字使得程序卡死，如果放在if里，那这个if语句没有意义，没什么用
	}
	
	for(i=0;i<=9;i++){
		printf("%d出现了%d次",i,count[i]);
	}
	return 0;
}