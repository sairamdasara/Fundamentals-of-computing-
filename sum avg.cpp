#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg=0;
	printf("Enter the number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	avg=sum/n;
	
	printf("sum is :%d",sum);
	

	
	printf(" avg is: %f",avg);
	
	
}
