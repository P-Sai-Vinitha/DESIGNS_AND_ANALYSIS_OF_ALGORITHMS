#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=200,max=-10;
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("%d",max);
	printf("\n");
	printf("%d",min);
	
}