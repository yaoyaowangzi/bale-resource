#include<stdio.h>

int isPrime(int i) 
{
        int ret=1;
		int j=2;
		for(;j<i-1;j++) {
			if (i%j==0) {
				ret=0;
				break;
			}
		}
		return ret;
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int sum=0;
	int count=0;
	int i;
	if (m==1) {
		m=2;
	}
	for (i=m;i<=n;i++) {
		if (isPrime(i) ){
			sum+=i;
			count++;
		}
	}
	printf("%d,%d\n",count,sum);
	return 0;
}
