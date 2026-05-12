#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int dight;
	int ret=0;
	do {
		dight = x%10;
		ret = ret*10+dight;
		printf("x=%d,dight=%d,ret%d\n",x,dight,ret);
		x/=10;
	} while (x>0);
	printf("%d",ret);
	return 0;
}
