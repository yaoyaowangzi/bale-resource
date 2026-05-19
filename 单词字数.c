#include<stdio.h>
int main()
{
	char i;
	int count=0;
	while (i!='.') {
		while (i!=' ') {
			scanf("%c",&i);
			count++;
		}
	    if (count!=0) {
	    	printf("%d ",count);
		}
		count=0;
	}
	return 0;
}
