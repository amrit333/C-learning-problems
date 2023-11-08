#include<iostream>
using namespace std;
int main()
{
    int i,j,d;
    cout<<"enter numbre you want to check";
    cin>>i;
    int o=i;
    while(i>0)
    {
        j=i%10;
        d=d+(j*j*j);
        i=i/10;
             
        
    }
    if(d==o)
    {
        cout<<"it is an armstrong numbr";
    }
    return 0;
}