/*给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
输入格式：
输入在一行中给出A。
输出格式：
输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。*/
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	int i=a;
	while(i<a+4){
		int count = 0;
		int j=a;
		while(j<a+4){
			int k=a;
			while(k<a+4){
				if(i!=j){
					if(i!=k){
						if(j!=k){
							printf("%d",i*100+j*10+k);
					        count++;
							if(count<6){
								printf(" ");
							}		
								else printf("\n");
						}
					}
				}
			k++;
			}
		j++;	
		}
	i++	;
	}
	
	return 0;
}