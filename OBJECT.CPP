#include<iostream.h>
#include<conio.h>
#include<math.h>
class power
{int x;
public:
power()
{x=0;
}
void input()
{
cout<<"enter a number";
cin>>x;
}
void output()
{
cout<<x;
}
power operator^(power o)
{
power temp;
temp.x=pow(x,o.x);
return temp;
}
};
void main()
{
power obj1,obj2,obj3;
clrscr();
obj1.input();
obj2.input();
obj3=obj1^obj2;
obj3.output();
getch();
}

