#include<stdio.h>
int main()
{
	int ih,im;
	scanf("%d:%d",&ih,&im);
	if (ih>12) {
		printf("%d:%d PM",ih-12,im);
	} else if (ih==12) {
		printf("0:%d AM",im);
	} else if (ih==24){
	    printf("%d:%d AM",ih-24,im);
    } else printf("%d:%d AM",ih,im);
	return 0;
}
