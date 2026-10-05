//输入密码
//要求用户输入密码（就设成 123456 吧）。输错就打印 密码错误，请重新输入，然后重新读；输对就打印 登录成功，结束。
#include <stdio.h>
int main(){
	const int secret = 123456;
	int input;
    do{
    	printf("请输入密码:\n");
    	scanf("%d",&input);
    	if(secret!=input){
    		printf("密码错误，请重新输入:\n");
    		scanf(%d,&input);
		}
	}while(secret!=input);
		printf("登录成功\n");
	
	return 0;
}