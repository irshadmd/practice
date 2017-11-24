/*Program to calculate frequency of each character of a string */
#include<stdio.h>
#include<string.h>

int main()
{
	char a[]={"PROLOG ACADEMY"},b[26]={0};
	int i,n=65;
	puts(a);
	for(i=0;a[i];i++)
	{
		b[a[i]-65]+=1;
	}
	for(i=0;i<26;i++)
	{  
		  printf("%c is %d times\n",n,b[i]);
		  n++;
	}
	
}
