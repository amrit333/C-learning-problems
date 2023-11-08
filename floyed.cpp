#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter value of n";
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j<i;j++)
        {
            cout<<"*";
            // count++;
        }
        for(  int j=n;j>0;j--)
        {
            if(j<n){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    getch();
return 0;
}