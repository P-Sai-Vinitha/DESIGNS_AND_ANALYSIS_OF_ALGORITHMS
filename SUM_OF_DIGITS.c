#include<stdio.h>
int main()
{
	int n,sum=0,rev=0;
	scanf("%d",&n);
	
	while(n!=0)
	{
		rev=n%10;
		sum+=rev;
		n=n/10;
	}
	printf("%d",sum);
	
}