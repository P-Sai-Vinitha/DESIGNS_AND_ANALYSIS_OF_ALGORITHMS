#include<stdio.h>
int main()
{
	int n,rev=0;
	scanf("%d",&n);
	int a=n;
	while(n!=0)
	{
		rev=(rev*10)+n%10;
		n=n/10;
	}
	if(a==rev)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}