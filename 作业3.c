#include<stdio.h>
  int main()
{   
   int i;
   scanf("%d",&i);
   int a=i%100%10;
   int b=i%100/10;
   int c=i/100;
   i=a*100+b*10+c;
   printf("%d\n",i);
   return 0;
}
