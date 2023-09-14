#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the numbers :\n");
	scanf("%d %d",&n,&m);
	n=n+m;
	m=n-m;
	n=n-m;
	printf("%d %d",n,m);
}
