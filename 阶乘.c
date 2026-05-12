#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=1;
	int result=1;
	for (b;b<=a;b++) {
		result*=b;
	}
	printf("%d",result);
	return 0;
}
