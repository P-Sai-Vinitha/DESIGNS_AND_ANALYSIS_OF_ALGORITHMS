#include<stdio.h>
#include<conio.h>
int fibonacci(int i)
{
	if(i==0)
	{
		return 0;
	}
	else if(i==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(i-1)+fibonacci(i-2));
	}
}
int main()
{
	int n,i;
	printf("number of element in series:");
	scanf("%d",&n);
	printf("fibinocci series is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",fibonacci(i));
	}
	getch();
}
