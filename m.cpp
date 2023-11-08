#include<iostream>
using namespace std;
int main()
{
    int i,j,d=0;
    cout<<"enter numbre you want to check";
    cin>>i;
    int o=i;
    while(i>0)
    {
        j=i%10;
        d+=j*j*j;
        i=i/10;
             
        
    }
    if(d==o)
    {
        cout<<"it is an armstrong numbr";
    }
    else{
        cout<<"this is not";
    }
    return 0;
}