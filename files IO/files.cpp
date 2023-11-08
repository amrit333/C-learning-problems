#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream file("sample.txt",ios::app);
    ifstream file3("sample.txt");
    string st="what the fuck is this";
    file<<st;
    string st2;
    getline(file3,st2);
    cout<<st2;

}