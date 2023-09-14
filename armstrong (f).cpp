#include<stdio.h>
int main()
{
	int n,rem,arm=0,temp=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		arm=arm+rem*rem*rem;
		n=n/10;
		
	}
	if(arm==temp)
	{
		printf("Enter number is armstrong number");
	}
	else
	{
		printf("not an armstrong number");
	}
}
