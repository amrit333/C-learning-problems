#include<iostream>
using namespace std;    
int main()
{
    int date;
    for(date=1;date<=31;date++)
    {
        if (date%2==0)
        {
            continue;
        }
        else
        {
            cout<<"you have to study on day"<<date<<endl;
        }
        
    }
    return 0;
}