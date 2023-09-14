#include<stdio.h>
int main()
{
	char n;
	int ascii=0;
	printf("Enter the upper case:\n");
	scanf("%c",&n);
	ascii=n+32;
	printf("The lowercase is : %c",ascii);
}
