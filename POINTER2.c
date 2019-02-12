#include<stdio.h>
void pass(int *p)
{
	printf("%5d",*p);
}
int main()
{
	int a[]={2,4,5,6,8},i;
	for(i=0;i<5;i++)
	{
		pass(&a[i]);
	}
}