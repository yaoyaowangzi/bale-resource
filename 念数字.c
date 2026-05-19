#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n<0) {
		n=-n;
		printf("fu ");
	}
	if (n==0) {
		printf("ling");
		return 0;
	}
	int middle=n;
	int count=0;
	while (middle!=0) {
		middle/=10;
		count++;
	}
	int i;
	int j;
	int beichu=1;
	for (i=0;i<count-1;i++) {
			beichu*=10;
		}
	for (i=0;i<count;i++) {
		j=n/beichu;
		switch ( j ) {
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
	    	}
	    	if(i<count-1) {
	    		printf(" ");
			}
			n=n-j*beichu;
	    	beichu/=10;
		}
	return 0;
}
