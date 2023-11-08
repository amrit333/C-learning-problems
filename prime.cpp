#include<iostream>
using namespace std;
int main(){
    int a,i=2;
    cout<<"enter number you want to check";
    cin>>a;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"it is not a prime number"<<endl;
            break;
        }
    }
    if(a==i)
    {
        cout<<a<<"is a prime number"<<endl;
    }
}