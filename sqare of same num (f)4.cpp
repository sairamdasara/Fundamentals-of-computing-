#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,i);
		
	}
	printf("%d",sum);
}
