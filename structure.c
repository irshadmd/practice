#include<stdio.h>
struct student
	{
		char name[20];
		char subject[3][10];
		int marks[3];
		int totalmarks;
		float percentage;
	};
int main()
{
	struct student s[3];
	int i,j;
	for(i=0;i<3;i++)
	{   s[i].totalmarks=0;
		printf("Enter the name of %d student:",i+1);
		scanf("%s",&s[i].name);
		for(j=0;j<3;j++)
		{
			printf("Enter the %d Subject name and marks",j+1);
			scanf("%s%d",&s[i].subject[j],&s[i].marks[j]);
			s[i].totalmarks+=s[i].marks[j];
		}
		s[i].percentage=s[i].totalmarks/3;
	}
for(i=0;i<3;i++)
{
	printf("Record of %d student is:\n",i+1);
	printf("Name:%s \n Percentage:%f\n",s[i].name,s[i].percentage);
}	
}