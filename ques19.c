#include<stdio.h>
int main()
{
	int n,sum=0,c=0;
	scanf("%d",&n);
	for(int j=5;j<100000 && c<n;j++)
	{
		sum=0;
		for(int i=1;i<j;i++)
	    {
		if(j%i==0)
		{
			sum+=i;
		}
	}
	if(sum==j)
	{
		c++;
		printf("%d ",j);
	}
	}
}