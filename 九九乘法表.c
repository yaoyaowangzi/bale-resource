#include<stdio.h>
int main()
{
	int i=1;
	int j=1;
	int n;
	int jian=1;
	scanf("%d",&n);
	while (i<=n) {
		while (j<=n) {
			if (j<=i){
			   printf("%d*%d=%d  ",j,i,i*j);
		    }
		       jian++;
			   if (jian>n) {
				printf("\n");
			   } else if (i*j<10)
			    printf(" ");
		       j++;
		} 
		jian=1;
		j=1;
		i++;
	} 
	return 0;
}
