#include<stdio.h>
int main()
{
	int time;
	int minute;
	scanf("%d %d",&time,&minute);
	int hour=(minute/60)*100;
	time=time+hour+minute%60;
	printf("%d",time);
	return 0;
}
