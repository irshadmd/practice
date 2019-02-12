#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20];
	int ID;
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter ID:";
	cin>>ID;
	
	ofstream ex;
	ex.open("File1.txt");
	ex<<name<<endl;
	ex<<ID<<endl;
	ex.close();
	
	char copy_name[20];
	int copy_ID;
	ifstream ins;
	ins.open("File1.txt");
	ins>>copy_name;
	ins>>copy_ID;
	ins.close();
	
	ofstream exe;
	exe.open("File2.txt");
	exe<<copy_name;
	exe<<copy_ID;
	exe.close();
	
}