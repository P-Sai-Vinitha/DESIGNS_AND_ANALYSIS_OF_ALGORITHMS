#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	printf("first matrix:");
	int arr[r][c],brr[r][c],mul[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	printf("second matrix:");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&brr[i][j]);
		}
	}
	
	
	printf("matrix multiplication");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(int k=0;k<r;k++)
			{
				mul[i][j]+=arr[i][k]*brr[k][j];
			}
		}
	}
	
	
	
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	
}