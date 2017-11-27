#include<iostream>
using namespace std;
class multiplication
{
	int a[3][3];
	public:
	multiplication()
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				a[i][j]=0;
			}
		}
	}
	friend void operator>>(istream &input,multiplication &obj)
	{
		int i,j;
		cout<<"Enter the elements of 3*3 matrix"<<endl;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				input>>obj.a[i][j];
			}
		}
		
	}
	friend void operator<<(ostream &output,multiplication &obj)
	{
		int i,j;
		output<<"After multiplication matrix is:"<<endl;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				output<<obj.a[i][j];
				output<<"  ";
			}
			output<<endl;
		}
	}
	friend multiplication operator*(multiplication obj1,multiplication obj2)
	{   multiplication temp;
		int i,j,k;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					temp.a[i][j]+=obj1.a[i][k]*obj2.a[k][j];
				}
			}
		}
		return temp;
	}
};
int main()
{
	multiplication obj1,obj2,obj3;
	cin>>obj1;
	cin>>obj2;
	obj3=obj1*obj2;
	cout<<obj3;
}