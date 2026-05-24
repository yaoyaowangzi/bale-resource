#include<stdio.h>
int main()
{
	const char *hypy[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int n,sum=0;
	scanf("%d",&n);
	
	while (n>0) {
		sum+=n%10;
		n/=10;
	}
	char s[10];
	sprintf(s,"%d",sum);
	int i;
	for (i=0;s[i];i++) 
	/*s[]在这里把数字都转换为了字符串， 假设这里的sum是106 会转换为字符串‘1’‘0’‘6’ 然后接下去没有输入，为0，这里s【i】的巧妙之处就是可以很智能的进行循环和终止循环 */
	{
		printf("%s%c",hypy[s[i]- '0'],s[i+1] ?' ' : '\n');//这里做了三元运算符 如果s【i+1】不等于0，输出空格，如果等于0，输出换行符 当s【i+1】为0的时候就代表已经读完看所有位数 
	}
}
