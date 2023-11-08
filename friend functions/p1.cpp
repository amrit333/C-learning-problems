#include<iostream>
using namespace std;
class st
{
    int a,b;
    public:
    friend st sum(st p,st q);
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void print();
    
};
void st::print()
{
    cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
}
st sum(st p , st q)
{
    st s;
    int m;
    s.set((p.a+q.a),(p.b+q.b));
    return s;
    

}


int main()
{
    st s,t,sumi;
    s.set(15,7);
    s.print();
    t.set(6,9);
    t.print();
    sumi=sum( s,t);
    sumi.print();

    return 0;
}