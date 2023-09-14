#include<stdio.h>
int main()
{
	float n1,n2,result;
	char o;
	printf("Enter the operator:\n");
	scanf("%c",&o);
	printf("Enter the numbers :\n");
	scanf("%f %f",&n1,&n2);
	switch(o)
	{
		case '+':result= n1+n2;
		break;
		case '-': result =n1-n2;
		break;
		case '/': result =n1/n2;
		break;
		case'*': result = n1*n2;
		break;
	
		default : ("Entered operator is invalid");
		break;
		
	}
	printf("%f",result);
}
