#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;
    public:
    base1(){
        a=1;
    }
};
class base2{
    protected:
    int b;
    public:
    base2()
    {
        b=15;
    }
};
class base3
{
    protected:
    int c;
    public:
    base3(){
        c=18;
    }
};
class drive : public base1, public base2, public base3
{
        int d;
        public:
        void print();
};
void drive::print()
{
    d=a*b*c;
    cout<<"you answer is = "<<d<<endl;
}
int main()
{
    drive m;
    m.print();
    return 0;
}