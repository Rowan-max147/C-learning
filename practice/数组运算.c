#include <stdio.h>
/*
找出key在数组a中的位置
key要寻找的数字
a要寻找的数组     数组的长度恒为sizeof(a)/sizeof(0) 
如果找到，返回其在a中的位置；如果找不到则返回-1
*/
//通常遍历数组都是用for循环，从0到<数组的长度
int search(int key,int a[],int length);
int main(void)
{
    int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};//数组的集成初始化
    //int b[]=a; 这是一种错误的写法，想要把一个数组的所有元素交给另一个数组，只能采取遍历
    //for(i=0;i<length;i++){
    //    b[i]=a[i];}
   /* {
    	int i;
    	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
    		printf("%d\t",a[i]);
		}//值得注意的是当离开循环的时候，i=length,此时恰好就是无效的下标
		printf("\n");
	}*/
	int x;
	int loc;
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d在第%d个位置上",x,loc);
	}
	else printf("%d不存在",x);
}  
int search(int key,int a[],int length){//数组作为函数参数时，需要另一个参数length来传入数组的大小，不能用sizeof，同时在[]中输入数组大小也是没有意义的
	int ret=-1;
	for(int i=0;i<length;i++){
		if(key==a[i]){
			ret=i;
            break;
		}
	}
	return ret;
}