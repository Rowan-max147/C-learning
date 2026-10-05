/*水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 13 + 53+ 33。本题要求编写程序,计算所有N位水仙花数。*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int t=1;
	int i=1;
	
	do{
		i*=10;
		t++;
	}while(t<n);
	
	 int first;
	 first = i;
	while(i<first*10){
	int draft=i;
	int j ;
	int sum = 0;
	
	do{
	j=draft%10;
	draft/=10;
	int cnt=n;
	int p =1;
	while(cnt>0){
		p*=j;
		cnt--;
	}
	sum+=p;
	}while(draft>0);
	
	if(sum==i){
		printf("%d\n",i);
	}
	i++;
}
	return 0;
}