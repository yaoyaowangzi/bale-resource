#include<stdio.h>
#include<math.h>
int main()
{
//	n=4 number (1000-9999) t=pow(10,n) t++ t<pow(10,n+1) 
// Ë®ÏÉ»¨Êý 153 370 371 407 
//  a=t%10 count=0 count++ count<n sum+=pow(a,n) sum=t printf(t)
//   n 3 t 153 a=3
	int n;
	scanf("%d",&n);
	int begin=pow(10,n-1);
	int end=pow(10,n);
	int t;
	for (t=begin;t<end;t++) {
		int temp=t;
		int sum=0;
		for (;temp>0;temp/=10) {
			int digit=temp%10;
			sum+=pow(digit,n);
			 }
			 if (sum==t) {
				  printf("%d\n",t);
		}
	}
	return 0;
}
