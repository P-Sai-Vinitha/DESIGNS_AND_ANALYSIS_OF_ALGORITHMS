#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10],str1[10];
	gets(str);
	printf("String 1:%s",str);
	strcpy(str1,str);
	printf("\nString 2:%s",str1);
	getch();
}

