#include<iostream>
using namespace std;
class y;
class x{
    int a;
    public:
    friend void swap(y &, x &);
    void get(int x)
    {
        a=x;
    }
};
class y
{
    int b;
    public:
    friend void swap(y &, x &);
    void get(int y){
        b=y;
    }

};
void swap(y &m , x &n)
{
    int temp=n.a;
        n.a=m.b;
        m.b=temp;

    cout<<"after interchange a="<<n.a<<" b = "<<m.b<<endl;
}
int main()
{
     y s;
     x A;
     s.get(15);
     A.get(35);
     swap( s,  A);
    return 0;
}
