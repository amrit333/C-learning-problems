#include<iostream>
using namespace std;
/*friend class in c++*/
class st;
class p
{
int sum(int a,int b){

return a+b;
}
int sumcomplex(st ,st );



};
class st
{
    int a,b;
    public:
friend class p;
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void print();
    
};

void st::print()
{
	cout<<"your number is "<<a<<" + "<<b"i"<<endl;
}
  int p:: sumcomplex(st j,st k)
{
	return((j.a+k.a),(j.b+k.b));
}
