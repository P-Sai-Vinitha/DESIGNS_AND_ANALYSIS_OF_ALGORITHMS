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
	for(int i=0;i<a-1;i++)
	{
		int max=i;
		for(int j=i+1;j<a;j++)
			if(arr[j]<arr[max])
				max=j;
		int temp=arr[max];
		arr[max]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<a;i++)
	{
		printf("%d",arr[i]);
	}
}