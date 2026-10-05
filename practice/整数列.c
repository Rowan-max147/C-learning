/*给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它
们组成的无重复数字的3位数。

输入格式：

输入在一行中给出A。

输出格式：

输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔
，但行末不能有多余空格。*/
#include <stdio.h>
int main(){
    int a;
    int i,j,k;  
    int count=0;
    scanf("%d",&a);
    i=a;
    while(i<=a+3){
       j=a;
       while(j<=a+3){
       	k=a;
       	while(k<=a+3){
		   		 if(i!=j&&i!=k&&j!=k){	
							printf("%d",i*100+j*10+k);
		   		 			count++;
		   		 			if(count<=5){
		   		 				printf(" ");}
		   		 				if(count==6){
		   		 					printf("\n");
		   		 					count=0;
									}																
					}  
    k++;
	   }
    j++;
	   }
	i++;  
	}
	
    
	
	return 0;
}