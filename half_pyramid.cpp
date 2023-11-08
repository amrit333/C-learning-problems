#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter value of n";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for (int j = 0; j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    getch();
return 0;
}