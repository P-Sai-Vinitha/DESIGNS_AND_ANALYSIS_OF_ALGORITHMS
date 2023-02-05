#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int key,s=0,e=a-1,mid;
	scanf("%d",&key);
	for(int i=0;i<a;i++)
	{	
	
	    if(arr[mid]==key)
	    {
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