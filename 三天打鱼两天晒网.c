#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N%5<=3 && N%5 !=0){
		printf("Fishing\n");
	} else printf("Drying\n");
	printf("in day %d",N);
	return 0;
}
