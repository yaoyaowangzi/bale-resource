#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int t=0;
	int n=0;
	printf("我已经想好了1-100里面的数了\n");
	do {
		printf("请输入你想的数:");
		scanf("%d",&t);
		n++;
		if (a<t && a!=t){
			printf("大\n");
		} else if(a>t && a!=t){
		    printf("小\n");} 
	} while (a!=t);
	printf("恭喜你猜对了，该数就是%d,猜了%d遍",a,n);
	return 0;
}
