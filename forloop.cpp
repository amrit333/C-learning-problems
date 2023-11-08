#include<iostream>
using namespace std ;
void loop(int a)
{
    for(a=0;a<10;a++)
    {
        cout<<"hello world"<<"for"<<a+1<<"th time" <<endl;
    }
}
int main()
{
    int i=0;
    loop(i);
    return 0;
}