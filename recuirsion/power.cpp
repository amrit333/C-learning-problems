#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter your number please";
    int num;
    cin>>num;
    cout<<"enter its power please";
    int Pow;
    cin>>Pow;
    int ans=1;
    for(int i=0;i<Pow;i++){
        ans=ans*num;
    }
    cout<<"your power is "<<ans;
return 0;
}