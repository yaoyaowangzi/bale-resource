#include<stdio.h>
#include<string.h>
/*strcmp 中cmp 表示compare，用作比较字符串大小
   输出返回 0：s1==s2； 返回1：s1>s2 ;  返回-1:s1<s2*/ 
int mycmp(const char *s1,const char *s2)
{
	//int idx=0;
//	while (s1[idx]!=s2[idx]&&s1[idx]=='0')  {
	/*	if (s1[idx]!=s2[idx]) {
			break;
		} else if (s1[idx]=='0') {
			break;
		}*/
//		idx++;
//	}
    while (*s1==*s2&&*s1!='0') {
    	s1++;
    	s2++;
	}
	return *s1-*s2;
}

int main(int argc,char const *argv[])
{
	char s1[]="abc";
	char s2[]="abc ";
	// printf("%d\n",s1==s2)这种写法是不行的，因为比较两个数组的时候比较的是它们的地址
	 
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;
}
