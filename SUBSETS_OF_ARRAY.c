#include<stdio.h>
#include<math.h>
void subset(int arr[],int n)
{
	int totalsubset=pow(2,n);
	for(int i=0;i<totalsubset;i++)
	{
		printf("{");
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				printf("%d",arr[j]);
			}
		}
		printf("}\n");
	}
}
int main()
{
	int arr[]={1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	subset(arr,n);
	return 0;
}