#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double fz=2;
	double fm=1;
	double middle;
	int count=1;
	double sum=0;
	for (;count<=n;count++) {
		sum+=fz*1.0/fm;
		middle=fz;
		fz+=fm;
		fm=middle;
	}
	printf("前%d项的和为%.2f",n,sum);
	return 0;
}
