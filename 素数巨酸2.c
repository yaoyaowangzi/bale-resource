#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int number;
	int count=0;
	int sum=0;
	for (number=m;number<=n;number++) {
		if (number<2) {
			continue;
		}
		int isPrime=1;
		
		int t;
		for (t=2;t<number;t++) {
			if (number%t==0) {
				isPrime=0;
				break;
			}
		}
		if (isPrime==1) {
			count++;
			sum+=number;
		}
	}
	printf("%d,%d",count,sum);
	return 0;
}
