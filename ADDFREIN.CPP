//Program to Add imaginary number using friend function
#include<iostream.h>
class addition
{
int a,b;
public:
void  getdata()
{
cout<<"a="; 
cin>>a;
cout<<"b=";
cin>>b;
}
void display()
{
  cout<<a<<"+"<<b<<"i"<<"\n";
}
friend addition setdata(addition obj1,addition obj2)
{
addition temp;
temp.a=obj1.a+obj2.a;
temp.b=obj1.b+obj2.b;
return temp;
}
};
int main()
{
addition obj1,obj2,obj3;
cout<<"Enter 1st number:";
obj1.getdata();
cout<<"Enter 2nd number:";
obj2.getdata();
obj3=setdata(obj1,obj2);
obj3.display();
}
/*OUTPUT
Enter 1st number:a=5
b=8
Enter 2nd number:a=3
b=2
8+10i
*/
