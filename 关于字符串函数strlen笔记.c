/* 关于#include<string.h>包含了 1.strlen; 2.strcmp; 3.strcpy; 4.strcat; 5.strchr; 6.strstr;
    1.strlen 以len结尾，表示的是字符串的长度（不包括结尾的0）;*/
#include<stdio.h>
#include<string.h> 

int mylen(const char* s)
{
	int idx=0;
	while (s[idx]!='\0') {
		idx++;
	}
	return idx;
}

int main(int argc,char const *argv[])
{
	char line[]="Hello";
	printf("strlen=%lu\n",mylen(line));
	printf("sizeof=%lu\n",sizeof(line));
	return 0;
}
