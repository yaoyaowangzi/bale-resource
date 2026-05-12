#include<stdio.h>
int main()
{
	int x=2;
	int count=0;
	//scanf("%d",&x);
	for (x=2;count<50;x++)
	{
	 int a;
	 int isPrime=1;
	  for (a=2;a<x;a++) {
		if (x%a==0) {
			isPrime=0;
			break;
		}
	  }
		if (isPrime==1) {
			printf("%d ",x);
			count++;
		} 
    }
    printf("\n");
	return 0; 
}
