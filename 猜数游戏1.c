#include<stdio.h>
int main()
{
	int number,n;
	int guess;
	int count=0;
	scanf("%d %d",&number,&n);
	do {
		scanf("%d",&guess);
		count++;
		if (guess>number) {
			printf("Too big\n");
		} else if (guess<number) {
			printf("Too small\n");
		} else if (guess=number) {
			if (count==1) {
				printf("Bingo");
			} else if(count>1&&count<=3) {
				printf("Lucky you");
			} else if(count>3&&count<n) {
				printf("Good Guess");
			}
			break;
		}
	} while (count<n);
	if (count==n) {
		printf("Game over");
	}
	return 0;
}
