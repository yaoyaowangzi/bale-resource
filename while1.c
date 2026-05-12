#include<stdio.h>
int main()
{
	int x;
	int n=0;
	scanf("%d",&x);
	do {
		x/=10;
		n++;
		printf("x=%d,n=%d\n",x,n);
	} while(x>0);
	 printf("%d\n",n);
	 return 0;
}
