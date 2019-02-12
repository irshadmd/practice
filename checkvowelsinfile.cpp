#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int k=0;
	fstream file("file.txt",ios::in);
	while(file)
	{
		char ch=file.get();
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			k=k+1;
		}
	}
	file.close();
	cout<<"The no of vowels are:"<<k;
	return 0;
}