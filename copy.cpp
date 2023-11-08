#include<iostream>
using namespace std;
class a
{
    int A;
    public:
    a();
    a(int);
    a(a &);
};
a(){
    A=0;

}
a(int x)
{
    A=x;
    
}
a(a &ob)
{
    A=ob.a;
}
int main()
{
    a x,y,z;
    x.();
    
    return 0;

}
