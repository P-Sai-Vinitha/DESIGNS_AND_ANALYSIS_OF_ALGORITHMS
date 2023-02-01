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
	int s=0,e=n-1,mid,key;
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		while(s<=e)
		{
			mid=(s+e)/2;
			if(arr[mid]==key)
			{
				printf("%d",mid);
				return mid;
			}
			else if(arr[mid]<key)
			{
				s=mid+1;
			}
			else if(arr[mid]>key)
			{
				e=mid-1;
			}
			
		}
	}
}