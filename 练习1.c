#include<stdio.h>
int main()
{
/*	int a=-1;
	if (a>0&&a++>-1) {
		printf("OK");
	} 
	printf("a=%d",a);*/
	int i;
	i=(3+4,5+6);
	int a,b;
	for (a=0,b=10;a<b;a++,b--) {
		printf("%d,%d\n",a,b);
	}
	printf("%d\n",i);
	return 0;
}
