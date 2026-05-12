#include<stdio.h>
int main()
{
	int a;
	int i,j,k;
	int cnt=0;
	scanf("%d",&a);
	i=a;
	while (i<=a+3) {
		j=a;
		while (j<=a+3){
		     k=a;
		     while (k<=a+3){
		     	if(j!=k && i!=k && i!=j) {
				  cnt++; 
				  printf("%d%d%d",i,j,k);
				    if (cnt%6==0) {
				 	     printf("\n");
				    } else {
					  printf(" ");
					  }
				}
		     	    k++;
			 }
			 j++;
		}
		i++;
	}
	return 0;
}
