//fibonicci
#include<stdio.h>
int fibo(int);
int main()
{
	int n;
	printf("Enter a fibonicci no:");
	scanf("%d",&n);
	printf("ANSWER :%d",fibo(n));
	return 0;
}
int fibo(int n)
{
	if(n<=1)
	{	return(n);}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}