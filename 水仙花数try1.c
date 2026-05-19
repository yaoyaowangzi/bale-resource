#include<stdio.h>
#include<math.h>
int main()
{
	/* int begin=1;
	   for (inti=1;i<n;i++) {
	   begin*=10;
       }      
       if (n=1)begin=0 
    int end=begin*10;*/
	int n;
	scanf("%d",&n);
	int begin=pow(10,n-1);
	int end=pow(10,n);
	int i;
	int j;
	for (i=begin;i<end;i++) {
		int t=i;
		int sum=0;
        for (;t>0;t/=10) {
        	int j=t%10;
        	sum+=pow(j,n);
		}
		if (sum==i) {
           printf("%d\n",i);
		}
	}
	return 0;
}
