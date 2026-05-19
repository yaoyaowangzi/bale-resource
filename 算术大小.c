#include<stdio.h>

void maxmin(int *a,int len,int *min,int *max);

int main(void)
{
	int a[]={1,2,3,4,5,6,11,23,34,};
	int min,max;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	printf("main a=%p\n",a);
	maxmin(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("a[0]=%d\n",a[0]);
	printf("min=%d,max=%d\n",min,max);
	int *p=&min;
	printf("*p=%d\n",*p);
	printf("*a=%d\n",*a);
	
	return 0;
}

void maxmin(int *a,int len,int *min,int *max)
{
	int i;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	printf("main a=%p\n",a);
	a[0]=1000;
	*min=*max=a[0];
	for (i=1;i<len;i++) {
		if (a[i]<*min) {
			*min=a[i];
		}
		if (a[i]>*max) {
			*max=a[i];
		}
	}
}
