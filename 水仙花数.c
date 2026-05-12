#include<stdio.h>
#include<math.h>
int main()
{
	int n=3;
	int i,j,k;
	i=1;
	while( i<10 && i>0) {
		j=0;
		while (j<10 && j>=0) {
			k=0;
			while (k<10 && k>=0){
				if ((int)pow(i,n)+(int)pow(j,n)+(int)pow(k,n)==i*100+j*10+k) {
					printf("%d%d%d\n",i,j,k);
				}
				k++;
			}
			j++;
		}
	    i++;
	} 
	return 0;
}
