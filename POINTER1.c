#include<stdio.h>
void display(int **p)
{
	printf("VALUE is: %d\n",**p);
}
void show(int *p)
{
	display(&p);
}

int main()
{
	int a=20;
	show(&a);
}
