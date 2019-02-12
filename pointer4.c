#include<stdio.h>
void pass1(int (*a)[4])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",*(*(a+i)+j));
		}
	}
}
void pass2(int (*a)[3][4])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",*(*(*a+i)+j));
		}
	}
}
void pass3(int *a)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",*a);
			a++;
		}
	}
}
int main()
{
	int a[3][4]={
				{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12}
				};
	pass1(a);
	printf("\n");
	pass2(&a);
	printf("\n");
	pass3(*a);
}
