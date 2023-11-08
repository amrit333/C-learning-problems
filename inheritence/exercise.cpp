#include <iostream>
#include <math.h>
using namespace std;
class simplecalc
{
protected:
    int a, b;

public:
    float c;
    simplecalc()
    {
        a = 7;
        b = 15;
    }
    void sum()
    {
        c = a + b;
    }

public:
    void sub()
    {
        c = a - b;
    }
    void mul()
    {
        c=a*b;
    }
    
    void div()
    {
        c=a/b;
    }

};
class scientificcalc : public simplecalc 
{
    public:
    void per(){
        c=(a/b)*100;
    } 
    void squaroot()   
    {
        c=sqrt(a*b);
    }
    void res()
    {
        c=1/(a+b);
    }
};
class hybrid : public scientificcalc
{
    public:
    float print(){
        return c;
    }
};
int main(){
    hybrid nm;
    nm.sum();
    cout<<"sum of two number is "<<nm.print()<<endl;
    nm.sub();
        cout<<"sub of two number is "<<nm.print()<<endl;
    nm.mul();
        cout<<"mul of two number is "<<nm.print()<<endl;
    nm.div();
        cout<<"division of two number is "<<nm.print()<<endl;
    nm.squaroot();
            cout<<"squaroot of sum of two number is "<<nm.print()<<endl;
    nm.per();
            cout<<"percentage of two number is "<<nm.print()<<endl;
    nm.res();
            cout<<"resiprocle of sum  of two number is "<<nm.print()<<endl;
    



    

    return 0;
}