#include<stdio.h>
int main()
{
	//a=2 S=2 a=22 S=24 a=222 a=2220
	int a,n;
	scanf("%d %d",&a,&n);
	int S=0;
	int count=1;
	int t=0;
	for (;count<=n;count++) {
		t=a+t*10;
		S +=t;
	}
	printf("%d",S);
	return 0;
}
