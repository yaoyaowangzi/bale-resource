#include<stdio.h>
int isPrime(int x,int knowprime[],int numberofknowprime);

int main()
{
	const int number=100;
	int prime[number];
	int j;
	for (j=0;j<number;j++) {
		prime[j]=0;
	}
	prime[0]=2;
	int count=1;
	int i=3;
    while (count<number) {
    	if (isPrime(i,prime,count)) {
    		prime[count++]=i;
		}
		i++;
	}
	for (i=0;i<count;i++) {
		printf("%d",prime[i]);
		if ((i+1)%5) {
			printf("\t");
		} else printf("\n");
	}
	return 0;
}

int isPrime(int x,int knowprime[],int numberofknowprime)
{
	int ret=1;
	int i;
	for (i=0;i<numberofknowprime;i++) {
		if (x%knowprime[i]==0) {
			ret=0;
			break;
		}
	}
	return ret;
}
