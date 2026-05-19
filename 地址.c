#include<stdio.h>
int main(void)
{
	int a[10];
	printf("%p/n",&a);
	printf("%p/n",a);
	printf("%p/n",&a[0]);
	printf("%p/n",&a[1]);
	/*int i=0;
	int p;
	p=(int)&i;
	printf("0x%x\n",&p);
	printf("%p\n",&i);
	int a;
	a=6;
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(a)=%ld\n",sizeof(a));*/
	return 0;
}
