#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int count=0;
	int i;
	for (i=m;i<=n;i++) {
		int t=2;
		int applause=1;
		int sum=0;
		for (;t<i;t++) {
			if (i%t==0) {
				applause=0;
			}
			if (applause==1) {
				count++;
				sum+=sum;
			}
		}
	printf("%d,%d\n",count,sum);
	}
	return 0;
}
