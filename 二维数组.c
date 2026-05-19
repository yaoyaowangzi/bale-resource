#include<stdio.h>
int main()
{
	int a[3][5];
	int i,j;
	for (i=0;i<3;i++) {
		for (j=0;j<5;j++) {
			a[i][j]=i*j;
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}
