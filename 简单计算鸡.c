#include<stdio.h>
int main()
{
	char fh='0';
	int result;
	int i;
	int pd=1;
	scanf("%d",&result);
	while(1) {
		scanf("%c",&fh);
		if (fh=='=') {
		break;
	    } 
		scanf("%d",&i);
		if (fh=='+') {
			result+=i;
		} else if(fh=='-') {
			result-=i;
		} else if(fh=='*') {
			result*=i;
		} else if(fh=='/') {
			if (i==0) {
				pd=0;
			} else {
				result/=i;
			}
		}
	}
	if (pd==0) {
		printf("ERROR");
	} else {
		printf("%d",result);
	}
	return 0;
}
