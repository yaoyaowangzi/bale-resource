#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int cnt;
	printf("请输入数字的数量： ");
	scanf("%d",&cnt);
	if (cnt>0) {
		int number[cnt];
		int count=0;
		scanf("%d",&x);
		while (x!=-1) {
			number[count]=x;
			count++;
			sum+=x;
			scanf("%d",&x);
		}
		printf("%f\n",sum/count);
		int i;
	    for (i=0;i<count;i++) {
	    	if (number[i]>sum/count) {
	    	printf("%d\n",number[i]);
	        }
	    }	
	}
}
