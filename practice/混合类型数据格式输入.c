#include <stdio.h>
int main()
{   
    char c;
    int b;
    double a,d;
	scanf("%lf %d %c %lf",&a,&b,&c,&d);//scanf中存double类型的变量要用lf，float类型用f
	printf("%c %d %.2f %.2f\n",c,b,a,d);
	
	return 0;
}