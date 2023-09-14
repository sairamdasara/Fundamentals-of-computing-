#include<stdio.h>
int main()
{
	int a,b,c,t1,t2;
	printf("Enter the numbers:\n");
	scanf("%d %d ",&a,&b);
	scanf("%d",&c);
	t1=c;
	t2=b;
	b=a;
	c=t2;
	a=t1;
	printf("%d %d %d",a,b,c);
	
}
