#include<stdio.h>
int main()
{
	
	int n,i,sum=0;
	printf("Enter the number for series:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf(" sum of squares of series is: %d",sum);
}
