#include<iostream>
using namespace std;
int main()
{
    cout<<"enter numbreer of rows";
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" *";
        }
        for(int j=1;j<=2*row-2*i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" *";
        }
        for(int j=1;j<=2*row-2*i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    
   

}