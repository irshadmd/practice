#include<iostream>
using namespace std;
class data
{
	int a[50],i,f,l,n;
	public:
	void input();
	void output();
	void traverse();
};
void data::input()
{
	cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER "<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elemnts of array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void data::output()
{
	cout<<"Array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void data::traverse()
{
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
}
int main()
{
	class data o;
	o.input();
	o.output();
	o.traverse();
}