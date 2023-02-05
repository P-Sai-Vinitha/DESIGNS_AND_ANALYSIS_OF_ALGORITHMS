#include<stdio.h>
#include<math.h>
int main()
{
	int n,rev=0,sum=0,c=0,d;
	scanf("%d",&n);
	d=n;
	while(n!=0)
	{
		rev=(rev*10)+n%10;
		n=n/10;
		c++;
	}
	while(rev!=0)
	{
		sum=sum+pow(rev%10,c);
		rev=rev/10;
	}
	
	if(sum==d)
	{
		printf("true");
	}
	else
	{
		printf("False");
	}
}