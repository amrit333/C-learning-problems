#include<iostream>
using namespace std;
template <class t> 
void sum(t a,t b)
{
   
    cout<<a+b<<endl;
}
template <class t>
void sum(t a , t b ,t c)
{
    cout<<a+b+c<<endl;
}
int main()
{
   int a=7,b=6,c=17;
   sum(a,b,c);
   sum(a,b);

    
}



