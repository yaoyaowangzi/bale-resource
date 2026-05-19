#include<stdio.h>
int main()
{
	char i='0';
	i=getchar();
	while (1) {
		if (i=='#') {
			break;
		} else if(i>='a'&&i<='z') {
			i-=32;
 		} else if(i>='A'&&i<='Z') {
 			i+=32;
		 }
		//I-26
		printf("%c",i);
		i=getchar();
	}
	return 0;
}
