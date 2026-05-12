#include<stdio.h>
int main()
{
	/*a=2, 3 4 5
	234 235 243 245 253 254
	324 325 342 345 352 354 */
	int a;
	int b,c,d;
	int count=0;
	scanf("%d",&a);
	int t=a;
	for (;t<=a+3;t++){
	  for (b=a;b<=a+3;b++) {
		 for(c=a;c<=a+3;c++) {
			if (t!=b&&t!=c&&b!=c) {
			   printf("%d%d%d",t,b,c);
			   count++;
			   if (count==6) {
			   	printf("\n");
			   	count=0;
			   } else printf(" ");
			}
		 }
	  }
    }
	return 0;
}
