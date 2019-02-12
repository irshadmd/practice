#include<iostream.h>

#include<conio.h>
#include<math.h>
class power
{
int p;
public:
power()
{p=0;
}
void input()
{cout<<"enter a number ";
cin>>p;
}
void output()
{
cout<<"power is "<<p;

}
power operator^(power o)
{
power temp;
temp.p=pow(p,o.p);
return temp;
}
};
void main()
{power obj1,obj2,obj3;
clrscr();
obj1.input();
obj2.input();
obj3=obj1^obj2;
obj3.output();
getch();
}






