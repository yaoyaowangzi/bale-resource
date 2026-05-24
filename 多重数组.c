#include<stdio.h>

int main(void)
{
	char *a[]={
	    "January","February","March","April","May","June","July","August","September","October","November","December",
	};
	int i=0;
	int j;
	scanf("%d",&j);
	for (i=0;i<13;i++) {
		if (i==j) {
			printf("%dÔÂÊÇ%s",j,a[j-1]);
		}
	}
	
	return 0;
}
