#include <stdio.h>
void swap(int a,int b);
//参数独立于自己所在的函数空间，与其他函数没有关系，例如当a，b的值赋给swap中的a，b时，进入了swap的空间，此时main中的a，b就会not found
int main()
{
	int a=5;
	int b=6;//变量的作用域仅仅在自己被定义的块内，例如在main中定义的变量进入swap后就不存在
	swap(a,b);
	{
		int i=10;
		printf("%d %d\n",i,a);//变量只在块内存在，块外定义的变量如a在里面仍然有效
	}//可以随便拉一个大括号定义变量
	{
		int a = 10;
		printf("%d\n",a);//如果在块内定义的变量与在块外定义的变量重名，那么新定义的变量会覆盖之前定义的变量，但在同一个块内不能做这件事
	}
	printf("a=%d,b=%d",a,b);
	return 0;
}
void swap(int a,int b)//main里的a，b只是把自己的值赋给swap里的a，b，除此之外二者不产生联系，因此不能用形如swap的函数实现a和b的交换
{ 
	int t=a;
	a=b;
	b=t;
}