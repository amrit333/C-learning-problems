#include<iostream>
using namespace std;
int main()
{
    int *ptr =new int[3];
    *ptr=25;
    cout<<*ptr<<endl;
    *(ptr+1)=255;
    cout<<*(ptr+1)<<endl;



}