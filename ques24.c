#include<stdio.h>
int main()
{
	int a,element,choice,position;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter choice: 1.at beginning 2.at middle 3.at last");
	scanf("%d",&choice);
	scanf("%d",&position);
	//printf("enter the element to be inserted:");
	scanf("%d",&element);
	if(choice==1)
	{
		for(int i=a;i>=0;i--)
		{
			arr[i] = arr[i - 1];
			
		}
		arr[0]=element;
	
	}
	if(choice==3)
	{
		for(int i=0;i<=a;i++)
		{
			arr[a]=element;
			
		}
		
	}
	if(choice==2)
	{
		for(int i=a;i>=position;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[position-1]=element;
	}
	for(int i=0;i<=a;i++)
		{
			printf("%d ",arr[i]);
		}
	
	
}