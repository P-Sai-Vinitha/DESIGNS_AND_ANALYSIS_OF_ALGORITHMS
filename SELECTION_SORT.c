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
	for(int i=0;i<n-1;i++)
	{
		int mx=i;
		for(int j=i+1;j<n;j++)
			if(arr[j]<arr[mx])
				mx=j;
		int temp=arr[mx];
		arr[mx]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}