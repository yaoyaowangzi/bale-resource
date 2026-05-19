#include<stdio.h>
int main()
{
	int i,j;
	int n;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			if (j<=i) {
				printf("%d*%d=%d",i,j,i*j);
				 if (i*j<10) {
					printf("  ");
				} else printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
