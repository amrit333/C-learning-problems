#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number you want to check";
    cin>>n;
    int i=2;
    int flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"this is not a prie number";
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"this is a prime number";
    }
return 0;
}