#include<stdio.h>
int main()
{
	int fz,fm;
	scanf("%d/%d",&fz,&fm);
	/*a b c
	  18 12 6
	  12 6 0
	  6 0*/
	int a,b,c,middle;
	a=fz;
	b=fm;
	for (;b!=0;) {
		c=a%b;
		middle=b;
		b=c;
		a=middle;
	}  
	fz/=a;
	fm/=a;
	printf("=%d/%d",fz,fm);
	return 0;
}
