#include<stdio.h>
int all(int i);
int main()
{
	int n;
	scanf("%d",&n);
    all(1230);
    all(n);
    return 0;
}
int all(int i) 
{
	int sum=0;
	if (i==0) {
		printf("ling");
		return 0;
	} else {
		int j=i;
		int digit=1;
		while (j>0) {
		sum+=j%10;
		j/=10;
		digit*=10;
	    }
	    while (sum>0) {
	    	int k=sum/digit;
	    	switch (k) {
	    		case 1:printf("yi"); break;
			    case 2:printf("er"); break;
			    case 3:printf("san"); break;
			    case 4:printf("si"); break;
			    case 5:printf("wu"); break;
			    case 6:printf("liu"); break;
			    case 7:printf("qi"); break;
		        case 8:printf("ba"); break;
		        case 9:printf("jiu"); break;
		  	    case 0:printf("ling"); break;
		  	sum%=digit;
		  	digit/=10;
			}
			if (digit>0 ) {
			printf(" ");
			}
		}
	}
}
