#include<stdio.h>
int main()
{
	int n,c=0,rev=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("It is a prime number");
		while(n!=0)
		{
			rev=(rev*10)+n%10;
			n=n/10;
		}
		printf("\n%d is also prime number",rev);
	}
	else
	{
		printf("it is not a prime number");
	}
}