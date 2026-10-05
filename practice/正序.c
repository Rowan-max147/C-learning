#include <stdio.h>
int main(){
   int x,t;
   int mask = 1;
   scanf("%d",&t);
   x=t;
   while(t>9){  
   	t/=10;
   	mask*=10;
}
   
    do{
    	int d = x / mask;	
    	printf("%d",d);
    	if(mask>=10){
    		printf(" ");
		}
		x%=mask;
    	mask/=10;
	}while(mask>0);
	printf("\n");
	return 0;
	
}
