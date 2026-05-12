#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a;
	int result=1;
	for (b;b>1;b--) {
		result*=b;
	}
	printf("%d",result);
	return 0;
}
