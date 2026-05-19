#include<stdio.h>
int main()
{
	unsigned int i=0,b=0;
	while (++i!=0);
	printf("int数据类型最大数是：%u\n",i-1);
	b++;
	while ((i=i/10)!=0) 
	{
		b++;
	}
	printf("int数据类型最大数的数位是:%d",b);
	return 0;
}
