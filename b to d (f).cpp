#include<stdio.h>
#include<math.h>
int convertor(long long n)
{
	int dec=0,i=0,rem;
	while(n!=0)
	{
		rem=n%10;
		dec=dec+rem*pow(2,i);
		n=n/10;
		i++;
		
		
	}
	return dec;
}
int main()

{
	long long n;
	int a;
	printf("Enter the number :\n");
	scanf("%11d",&n);
	a=convertor(n);
	printf("the decimal number is : %d",a);
	
}
