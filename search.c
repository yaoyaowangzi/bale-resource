#include<stdio.h>
int main(void)
{
	/*int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
	{
		int i;
		for(i=0;i<sizeof(a)/sizeof(a[0]);i++) {
			printf("%d\n",a[i]);
		}
	}*/
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int loc;
	printf("请输入一个数字: ");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	return 0;
}
int search(int x,int a[],int length) {
	int i;
	int pd=0;
	for (i=0;i<length;i++) {
		if (x==a[i]) {
			pd=1;
			break;
		}
	}
	if (pd!=0) {
		printf("%d在%d位置上\n",x,i+1);
	} else printf("%d不在");
	return pd;
}
