#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number for series:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\t %d",i);
		}
	}
}
