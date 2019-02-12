#include<iostream>
#include<math.h>
using namespace std;
class power 
{
	int a;
	public:
	power()
	{
		a=0;
	}
	void input()
	{
		cout<<"Enter a number:"<<endl;
		cin>>a;
	}
	void output(power obj1,power obj2)
	{   
		cout<<obj1.a<<"^"<<obj2.a<<"="<<a;
	}
	friend power operator^(power &obj1,power &obj2)
	{
		power temp;
		temp.a=pow(obj1.a,obj2.a);
		return temp;
	}
};
int main()
{
	power obj1,obj2,obj3;
	obj1.input();
	obj2.input();
	obj3=obj1^obj2;
	obj3.output(obj1,obj2);
}