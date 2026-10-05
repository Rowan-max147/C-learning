#include <stdio.h>
int main()
{
	int y,y0,m,x,m0,w,d;
	printf("请分别输入对应年月日,如输入2026 9 20表示2026年9月20日:\n");
	scanf("%d %d %d",&y,&m,&d);
	
	y0 = y-(14-m)/12;
	x = y0+y0/4-y0/100+y0/400;
	m0 = m+12*((14-m)/12)-2;
	w =(d+x+(31*m0)/12)%7;
	
	if(w==0)
	{
		printf("%d年%d月%d日为星期日",y,m,d,w);
	}
	else{
	printf("%d年%d月%d日为星期%d",y,m,d,w);
    }
	
	
	return 0 ;
}