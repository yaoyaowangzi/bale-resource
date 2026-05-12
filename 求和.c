#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double sign=1.0;
	double sum=0.0;
	for (i=1;i<=n;i++) {
		sum+=(sign/i);
		sign=-sign;
	}
	printf("%f",sum);
	return 0;
}
