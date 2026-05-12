#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=2;
	int isPrime=1;
	for (b;b<a;b++) {
         if (a%b==0) {
         	isPrime=0;
         	continue;
		 }
		 printf("%d\n",b);
	}
	 if (isPrime==0) {
	 	printf("不是素数");
	 } else printf("是素数");
	return 0;
}
