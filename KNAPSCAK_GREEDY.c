#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of items:");
	scanf("%d",&n);
	int w[n],v[n];
	float r[n];
	printf("enter the weight for each item:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
	}
	printf("enter the values of each item:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	printf("the ratio:");
	for(int i=0;i<n;i++)
	{
		r[i]=v[i]/w[i];
		printf("%f",r[i]);
	}
}