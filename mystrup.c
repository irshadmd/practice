#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i,n;
	printf("Enter a string :");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	puts(a);
}