#include<stdio.h>
int f(int n)
{
	if(n==0)return 1;
	else return n*f(n-1);
}
int main()
{
	int n,fact=1;
	scanf("%d",&n);
	printf("%d",f(n));
}