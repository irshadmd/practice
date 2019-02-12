#include<iostream.h>
#include<conio.h>
class B;
class A
{
int a;
public:
void getdata()
{cout<<"enter a number";
cin>>a;
}
friend void add(A x,B y);
};
class B
{int b;
public:
void getdata()
{cout<<"enter a number";
cin>>b;
}
friend void add(A x,B y);
};
void add(A x,B y)
{int sum;
sum=x.a+y.b;
cout<<"sum is :"<<sum;
}
void main()
{clrscr();
A x1;
B y1;
x1.getdata();
y1.getdata();
add(x1,y1);
}













