/*#include <stdio.h>
int main()
{
	int m,n;
	int sum=0;
	int cnt=0;
	scanf("%d %d",&m,&n);
	int i;
	for(i=m;i<=n;i++){
		int k;
		int isPrime=1;
		if(i<2){
			isPrime=0;
		}
		for(k=2;k<i;k++){
			if(i%k==0){
				isPrime=0;
				break;
			}
		}
	if(isPrime){
	sum+=i;
	cnt++;
}
	}
	printf("%d %d",sum,cnt);
		
	return 0;
}*/
#include <stdio.h>
int isPrime(int i)
{
	int ret = 1;
	int k;		
	for(k=2;k<i;k++){
		if(i%k==0){
			ret=0;
			break;
			}
		}
		return ret;
}
int main()
{
	int m,n;
	int sum=0;
	int cnt=0;
	scanf("%d %d",&m,&n);
	int i;
	if(i<2){
			isPrime=0;
		}
	for(i=m;i<=n;i++){
	if(isPrime(i)){
	sum+=i;
	cnt++;
}
	}
	printf("%d %d",sum,cnt);
		
	return 0;
}