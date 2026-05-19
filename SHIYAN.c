#include<stdio.h>
int main()
{
    char c=127;
    c=c+1;//此处的c的定义类型是char 在加一后就翻过去了 理解为一个圆 
	int i=255;
	printf("c=%d\n",c);
	printf("i=%d",i);
	return 0;
}
