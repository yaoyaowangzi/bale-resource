//char *stcpy中cpy表示copy，就是复制，可以把一个字符串内容复制到另一个中
// char *strcpy(char *restrict dst,const char*restrict src)
//        把src字符串拷贝到dst； restrict表示src和dst不重叠 ;最后要返回dst
// char *dst=(char *)malloc(strlen(src)+1); strcpy(dst,src)
#include<stdio.h>
#include<string.h>
char* mycpy(char *dst,const char *src)
{
/*	int idx=0;
	while (src[idx]!) {
		dst[idx]=src[idx];
		idx++;
	}
	dst[idx]='\0';
	return dst;*/
	char* ret=dst;
	while (*dst++=*src++) ;
	*dst='\0';
	return ret;
}

int main(int argc,char const *argv[])
{
	char s1[]="abc";
	char s2[]="abc";
	strcpy(s1,s2);
	return 0;
}

 
 
