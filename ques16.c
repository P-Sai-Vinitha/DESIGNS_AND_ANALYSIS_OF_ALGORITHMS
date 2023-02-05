#include<stdio.h>
#include<stdlib.h>
int binomialcoeff(int n,int k)
{
	int c[n+1][k+1];
	int i,j;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=fmin(i,k);j++)
		{
			if(j==0||j==i)
			{
				c[i][j]=1;
			}
			else
			{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
		}
	}
	return c[n][k];
}
  
int main()
{
	int n=20,k=15;
	printf("value of(%d,%d) is %d",n,k,binomialcoeff(n,k));
	return 0;
}



