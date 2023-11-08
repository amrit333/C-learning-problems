#include<iostream>
using namespace std;
class S{
    int a,b;
    public:
    S(int x ,int y=0)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"value of a is = "<<a<<" value of b is = "<<b<<endl;

    }
};
int main()
{
    S o(6);
    o.print();
    S p(16,6);
    p.print();
    return 0;
}
