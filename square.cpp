#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row , coloumn;
    cout<<"enter number of rows";
    cin>>row;
    cout<<"enter number of coloumn";
    cin>>coloumn;
    for(int i=0 ; i<=row;i++)
    {
        for(int j=0;j<coloumn;j++)
        {
            if(i==0 || i==row || j==0||j==coloumn-1)
            {
                cout<<"*";
            }
                       
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    getch();
    return 0 ;
}
