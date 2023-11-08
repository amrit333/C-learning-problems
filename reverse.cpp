#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"enter no. you want to revers = ";
    cin>>i;
    while(i>0)
    {
        j=i%10;
        cout<<j;
        i=i/10;
    }
}