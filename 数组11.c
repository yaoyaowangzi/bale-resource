#include<stdio.h>
int main()
{
	const int size=3;
	int board[size][size] ;
	int i,j;
	int num0fx;
	int num0f0;
	int result=-1; //-1 √ª»À”Æ 1£ªX”Æ  0£∫0”Æ
    for (i=0;i<size&&result==-1;i++) {
    	num0fx=num0f0=0;
    	for (j=0;j<size;j++) {
    		if (board[i][j]==1) {
    			num0fx++;
			} else {
				num0f0++;
			}
		}
		if (num0f0=size) {
			result=0;
		} else {
			result=1;
		}
	}
	if (result==-1) {
		for (j=0;j<size&&result==-1;j++) {
    	num0fx=num0f0=0;
    	for (i=0;i<size;i++) {
    		if (board[i][j]==1) {
    			num0fx++;
			} else {
				num0f0++;
			}
		}
		if (num0f0=size) {
			result=0;
		} else {
			result=1;
		  }
	   }
	}
	return 0;
}
