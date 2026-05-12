#include<stdio.h>
int main()
{
	int i=1;
	int j=1;
	int n;
	scanf("%d",&n);
	while (i<=n) {
		while (j<=i){
			printf("%d*%d=%d",j,i,i*j);
		    if (i*j<10){
				printf("   ");
			} else printf("  ");
			j++;
		}
		printf("\n");
		j=1;
		i++;
	}
	return 0;
}
