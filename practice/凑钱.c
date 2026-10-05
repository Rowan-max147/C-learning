#include <stdio.h>
int main()
{
    int x=2;
	int one,two,five;
	
//	scanf("%d",&x);
	for(one = 1;one < x*10; one++){
		for(two=1;two<x*5;two++){
			for(five=1;five<x*2;five++){
				if(one+two*2+five*5==x*10){
					printf("可以用%d个一角%d个两角%d个五角得到%d元\n",one,two,five,x);
				goto out;	
			    }   
			}
	
		}

	}
	out: 
		return 0;
}