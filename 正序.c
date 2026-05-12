#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	int count=0;
	scanf("%d",&x);
	int t=x;
	for (t;t>9;t/=10) {
		count++;
	}
	printf("%d %d\n",x,count);
	int d=1;
	int i;
	for (;count>=0;count--) {
		d*=pow (10,count);
		i=x/d;
		printf("%d\n",i);
		x-=i*d;
		d=1;
	}
	return 0;
}
