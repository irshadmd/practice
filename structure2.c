#include<stdio.h>
struct student
{
	struct college
	{
		int ID;
		char name[20];
	}c[5];
	char stname[20];
	char subname[5][20];
	int marks[5];
	int Tmarks;
	float percentage;
		
}s[5];
int main()
{
struct student s[5];
struct college c[5];
int i,j,g=0,k=0;
for(i=0;i<5;i++)
{
	printf("Enter the %d College ID and College Name:",i+1);
	scanf("%d%[^\n]",&s[i].c[i].ID,&s[i].c[i].name);
	printf("Enter %d student name:",i+1);
	scanf("%s",s[i].stname);
	s[i].Tmarks=0;
	for(j=0;j<5;j++)
	{
		printf("Enter the %d Subject name and Marks",j+1);
		scanf("%s%d",&s[i].subname[j],&s[i].marks[j]);
		s[i].Tmarks+=s[i].marks[j];
	}
	s[i].percentage=s[i].Tmarks/5;
}	
for(i=0;i<5;i++)
{
  g=s[0].percentage;
if(g<s[i].percentage)
{
	g=s[i].percentage;
	k++;
}	
}
printf("TOPPER NAME IS%s:",s[k].stname);
}