#include<stdio.h>
int main()
{
	int n,rev=0;
	scanf("%d",&n);
	int b=n;
	while(n!=0)
	{
		rev=(rev*10)+n%10;
		n=n/10;
	}
	if(b==rev)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
}