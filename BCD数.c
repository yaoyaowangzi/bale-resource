#include<stdio.h>
 int main()
{
	int a;
	scanf("%d",&a);
	int b=a%16+a/16*10;
	printf("%d",b);
	return 0;
}
