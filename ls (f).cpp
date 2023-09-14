#include<stdio.h>
int main()
{
	int n,a[10]={1,2,3,4,5,6,7,8,9,10},i;
	printf("Enter the number to check:\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n==a[i])
		{
			printf("%d is in %d position",n,i);
		}
	}
}
