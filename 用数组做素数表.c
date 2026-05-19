#include<stdio.h>

int isPrime(int x,int knowPrimes[],int numberOfknownPrimes);

int main(void)
{
	const int number=10;
	int prime[number];
	int j;
	for (j=0;j<number;j++) {
		prime[j]=0;
	}
	prime[0]=2;
	int count=1;
	int i=3;
	{
		int i;
		printf("\t\t");
		for (i=0;i<number;i++) {
			printf("%d\t",i);
		}
		printf("\n");
	}
	while (count<number) {
		if (isPrime(i,prime,count)) {
			prime[count++]=i;
		}
		{
			printf("i=%d \tcnt=%d\t",i,count);
			int i;
			for (i=0;i<number;i++) {
				printf("%d\t",prime[i]);
			}
			printf("\n");
		}
		i++;
	}
	for (i=0;i<number;i++) {
		printf("%d",prime[i]);
		if ((i+1)%5) {
		  printf("\t");
	    } else printf("\n");
    }
	return 0;
}
int isPrime(int x,int knowPrimes[],int numberOfknownPrimes)
{
	int ret=1;
	int i;
	for (i=0;i<numberOfknownPrimes;i++) {
		if (x%knowPrimes[i]==0) {
			ret=0;
			break;
		}
	}
	return ret;
}

