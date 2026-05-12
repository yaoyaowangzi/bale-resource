#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int number=m;
	int count=0;
	int sum=0;
	while (number<=n) {
		while (number%2!=0) {
			sum=sum+number;
		}
		number++;
		count++;
	}
	printf("%d %d",count,sum);
	return 0;
}
