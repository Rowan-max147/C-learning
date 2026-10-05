#include <stdio.h>
int main(){
	int a;
	int i,j,k;
	int count=0;
	scanf("%d",&a);
	k=a+3;
	while(k>=1){
		j=a+3;
		while(j>=1){
			i=a+3;
			while(i>=1){
				if(i!=j){
					if(i!=k){
						if(j!=k){
							printf("%d",k*100+j*10+i);
							count++;
							if(count<=3){
								printf(" ");
							
							}
								else{
									printf("\n");
									count=0;
								}
						}
					}
				}
			i--;	
			}
		j--;
		}
		k--;
	}
	
	return 0;
}