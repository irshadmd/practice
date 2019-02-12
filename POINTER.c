#include<stdio.h>
int* pass()
{
	static int p=20;
	return &p;
}
int main()
{   int *p;
	p=pass();
	printf("Address is:%u\n",p);
	printf("Value is:%d",*p);
	
}