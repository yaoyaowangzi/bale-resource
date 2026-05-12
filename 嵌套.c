#include<stdio.h>
int main()
{
	int x;
	int one,two,five;
	int exit=0;
	
	scanf("%d",&x);
	for (one=1;one<=x;one++){
		for (two=1;two<=x*10;two++){
			for (five=1;five<=x*10;five++){
				if (one + two*2 + five*5==x*10){
					printf("可以用%d个1角 加 %d个2角 加 %d个五角组合得到 %d元\n",one,two,five,x);
				//	exit=1;
				//	break;
				goto out;
				}
			}
		//	if (exit==1) break;
		}
	//	if (exit==1) break;
	}
out :
	return 0;
}
