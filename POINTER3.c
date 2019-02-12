#include<stdio.h>
void display(int *p)
{	int i;
	for(i=0;i<5;i++)
	{
		printf("%4d",*p);
		p++;
	}
}
void show(int (*a)[5])
{	int i;
	for(i=0;i<5;i++)
	{
		printf("%4d",*((*a)+i));
	}
}
void print(int *p)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%4d",*p);
		p++;
	}
}
int main()
{
	int a[]={2,5,4,3,9};
	display(a);
	printf("\n");
	show(&a);
	printf("\n");
	print(&a[0]);
}


