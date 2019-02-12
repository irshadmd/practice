/*Program to multiply two numbers using multiple inheritance*/
#include<iostream.h>
using namespace std;
class num1                
{
    protected:
    int n;               
    public:
    void read();       
};
class num2             
{
    protected:
    int n;                
    public:
    void read();        
};
class result:public num1,num2
{
    private:
    int n;                 
    public:
    void ans()             
    {
        num1::read();    
        num2::read();    
        n=num1::n*num2::n;
        cout<<"Multiplication: "<<n<<endl;
    }
};
void num1::read()        
{
    cout<<"Enter number: ";
    cin>>n;
}
void num2::read()        
{
    cout<<"Enter number: ";
    cin>>n;
}
int main()
{
    result R;            
    R.ans();            
    return 0;
}