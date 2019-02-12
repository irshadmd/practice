#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i=0;
	fstream file("changecase.txt",ios::out|ios::app);
	while(file)
	{
		char ch=file.get();
		if(ch>=97&&ch<=122)
		{
			ch=ch-32;
			i=file.tellg();
			file.seekp(i-1);
			file.put(ch);
		}
		
	}
	file.close();
}