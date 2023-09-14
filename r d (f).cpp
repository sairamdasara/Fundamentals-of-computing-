#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char s1[10];
	printf("Enter the name:\n");
	gets(s1);
	printf("Enter the age:\n");
	scanf("%d",&n);
	printf("Your name is:");
	puts( s1);
	printf("\nyour age is :  %d",n);
}
