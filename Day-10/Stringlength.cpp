#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10] = "Hello";
	int x = strlen(ch);
	printf("%d \n %d",x,sizeof(ch));
}
