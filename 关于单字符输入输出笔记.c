/*字符串函数 1.单字符输入输出（putchar getchar） 
             2.返回写了几个字符，EOF（-1）表示失败 
             3.int putchar(int c); 需要有参数 ，类似于printf(" %c",ch) 
			 4.int getchar(void); 无参数，类似于scanf(" %c",&ch) 做输入，从键盘读取一个字符 
			 5.终止程序方法： Windows:Ctrl+Z*/
#include<stdio.h>

int main(int argc,char const*argv[])
{
	int ch;
	
	while ((ch=getchar())!=EOF) {
		putchar(ch);
	}
	printf("EOF\n");
	return 0;
}
