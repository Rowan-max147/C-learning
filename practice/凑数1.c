#include <stdio.h>
int main(){
	int x=0;
	int one,two,five;
	scanf("%d",&x);
	for(one=1;one<x*10;one++){
		for(two=1;two<x*5;two++){
			for(five=1;five<x*2;five++){
				if(one+two*2+five*5==x*10){
					printf("%d张一角%d张两角%d张五角和为%d元",one,two,five,x);
					goto out;
				}
			}
		}
	}
	out:
	return 0;
}