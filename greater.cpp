#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second  number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;
    if (a>b&&a>b)
    {
        cout<<a<<" is the greatest number";
    }
    else if(b>a&&b>c)
    {
        cout<<b<<"is the greater number";

    }
    else if(b<c&&c>a)
    {
        cout<<c<<"is greatest number";
    }
    else
    {
        cout<<"all numbers are equal";
    }
    
    return 0;
}