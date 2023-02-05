#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	scanf("%s",str);

	if(str==strrev(str))
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
}