#include<stdio.h>
int main()
{
	int n,exp,res=1;
	printf("Enter the base:\n");
	scanf("%d",&n);
	printf("Enter the power to the base:\n");
	scanf("%d",&exp);
	while(exp!=0)
	{
		res=res*n;
		exp--;
	}
	printf("power to the base is: %d",res);
}
