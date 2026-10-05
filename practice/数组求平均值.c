#include <stdio.h>
int main()
{
	int x;
	double sum=0;
	int cnt=0;
	int number[100];//定义数组
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;//对数组中元素赋值
		sum+=x;
		scanf("%d",&x);
		cnt++;
	}
	double average=sum/cnt;
	if(cnt>0){
		printf("%f\n",average);
		int i;
		for(i=0;i<cnt;i++){
			if(number[i]>average){//使用数组中的元素
				printf("%d\n",number[i]);//遍历数组
			}
		}
	}
	
	return 0;
}