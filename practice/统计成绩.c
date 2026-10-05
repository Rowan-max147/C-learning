//统计成绩,循环读入整数成绩，输入 -1 表示结束。读完后输出：
//一共输入了几个有效成绩
//总分
//平均分（保留小数）
//最高分
//最低分
//如果第一个输入就是 -1（没有任何有效成绩），输出 没有成绩，其他什么也不打印。
#include <stdio.h>
int main()
{
	int score,max,min;
	int sum = 0;
	int count = 0;
	double average;
	printf("请输入得分:");
	scanf("%d",&score);
	max = score;
	min = score;
	
	while(score!=-1){
		sum+=score;
		count++;
		if(score>max){
			max = score;
		}
	    if(score<min){
			min = score;
		}
		printf("请输入得分:");
		scanf("%d",&score);
	
	}
	if(count==0){
		printf("没有成绩");
	}
	else{
		printf("一共输入了%d个有效成绩\n",count);
		printf("总分为%d\n",sum);
		average = 1.0*sum/count;
		printf("平均值为%lf\n",average);
        printf("最大值为%d\n",max);
        printf("最小值为%d\n",min);
	}
	return 0;
}