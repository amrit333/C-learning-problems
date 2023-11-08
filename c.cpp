#include<iostream>
using namespace std;
class a
{
    int A;
    public:
    a(){
        A=0;
    }
    a(int x)
{
    A=x;
    
}
a(a &ob)
{
    A=ob.A;
}
void print()
{
    cout<<"your value of is =  "<<A<<endl;
}
};



int main()
{
    a x(9),y(x),z;
    x.print();
    y.print();

       
    
    return 0;

}
