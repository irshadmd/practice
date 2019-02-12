#include<iostream.h>
 class CDE;
 class ABC
 {  friend void add(ABC x,CDE y);
 	int a;
 	public:
    void getdata()
 	{
	 	cout<<"Enter a number\n";
    	cin>>a;
	}
};
class CDE
{	friend void add(ABC x,CDE y);
	int b;
	public:
	void getdata()
	{
		cout<<"Enter a number \n";
		cin>>b;
	}
};
void add(ABC x,CDE y)
{
	int sum;
	sum=x.a+y.b;
	cout<<"Sum is :"<<sum;
}
int main()
{
	ABC x1;
	CDE y1;
	x1.getdata();
	y1.getdata();
	add(x1,y1);
}