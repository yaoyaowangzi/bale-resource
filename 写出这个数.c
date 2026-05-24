#include<stdio.h>
int pd(int x);

int main()
{
	const int number=10;
	const char *hypy[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu",};
	int n;
	scanf("%d",&n);
  	int sum=pd(n);
  	if (sum==0) {
  		printf("ling");
  		return 0;
	  }
  	int temp=sum;
  	int mask=1;
  	while (temp>9) {
  		mask*=10;
  		temp/=10;
	}
	while (mask>0) {
		int k=sum/mask;
		printf("%s",hypy[k]);
		sum=sum%mask;
		mask/=10;
		if (mask>0) {
			printf(" ");
		} else printf("\n");
	}  
  	return 0;
}
int pd(int x)
{
	int sum=0;
	int i;
	while (x>0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}
