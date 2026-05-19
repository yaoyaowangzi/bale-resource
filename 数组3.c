#include<stdio.h>
int main()
{
	const int number=10;
	int count[number];
	int i;
	for (i=0;i<number;i++) {
		count[i]=0;
	}
	int x;
	scanf("%d",&x);
	while (x!=-1) {
		count[x]++;
		scanf("%d",&x);
	}
	for (x=0;x<number;x++) {
		printf("%d : %d\n",x,count[x]);
	}
}
