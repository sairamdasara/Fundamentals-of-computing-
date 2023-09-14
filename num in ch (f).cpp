#include<stdio.h>

int main()
{
	
	int n,rev=0,r=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	n=rev;
	while(n!=0)
	{
		r=n%10;
	switch(r)
	{
		case 1: printf("one");
		break;
		case 2: printf("Two");
		break;
		case 3: printf("Three");
		break;
		case 4: printf("Four");
		break;
		case 5: printf("Five");
		break;
		case 6: printf("six");
		break;
		case 7: printf("seven");
		break;
		case 8: printf("eight");
		break;
		case 9: printf("nine");
		break;
		case 10: printf("ten");
		break;
		default: ("invalid entrance");
		break;
}
n=n/10;
}

}
