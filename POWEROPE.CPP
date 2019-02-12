//Program to overload power operator
#include<iostream.h>
#include<math.h>
class power
{
int a;
public:
power()
{
  a=0;
}
void getdata()
{
  cout<<"Enter a number"<<"\n";
  cin>>a;

}
void display()
{
 cout<<"solution is :"<<a;
}
power operator^(power o)
{
  power temp;
  temp.a=pow(a,o.a);
  return temp;
}
};
int main()
{
power a1,a2,a3;
a1.getdata();
a2.getdata();
a3=a1.operator^(a2);
a3.display();

}
/*OUTPUT
Enter a number
3
Enter a number
6
solution is :729
*/

