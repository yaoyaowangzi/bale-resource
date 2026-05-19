#include<stdio.h>
int main()
{
	const int maxnumber=25;
	int isPrime[maxnumber];
	int i;
	int x;
	for (i=0;i<maxnumber;i++) {
		isPrime[i]=1;
	}
	for (x=2;x<maxnumber;x++) {
		if(isPrime[x]) {
			for (i=2;i*x<maxnumber;i++) {
				isPrime[i*x]=0;
			}
		}
	}
	for (i=2;i<maxnumber;i++) {
		if(isPrime[i]) {
			printf("%d\t",i);
		}
	}
	printf("\n");
	return 0;
}
