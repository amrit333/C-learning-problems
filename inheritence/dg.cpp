#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    base(int i)
    {
        a=i;
    }
    void printbase()
    {
        cout<<"your element of base 1 is = "<<a<<endl;
    }

 };
class base1
{
    protected:
    int b;
    public:
    base1(int j)
    {
        b=j;
    }
    void printbse1()
    {
        cout<<"your element of base 2 is = "<<b<<endl;
    }
};
class derive : public base, public base1
{
        int c;
        public:
        derive(int i ,int j,int c1): base( i), base1(  j)   
        {
            c=c1;
            
        }   
        void printdrive()
        {
            cout<<"element of drive class is = "<<c<<endl;
        }  
};   
int main()
{
    derive ob(45,6,78);
    ob.printbase();
    ob.printbse1();
    ob.printdrive();
}