#include<stdio.h>
int fact(int);
int main()
{
	int n,f=1;
	printf("Enter a number :");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
	return 0;
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return fact(n-1)*n;
}