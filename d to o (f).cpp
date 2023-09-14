#include<stdio.h>
int decTooct(int n);
int main()
{
	int n;
	printf("Enter the decimal number:\n");
	scanf("%d",&n);
	decTooct(n);
}
int decTooct(int n)
{
	int i=0,j,oct[100];
	while(n!=0)
	{
		oct[i]=n%8;
		n=n/8;
		i++;
	}
	printf("octal number is:\n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",oct[j]);
	}
	
}
