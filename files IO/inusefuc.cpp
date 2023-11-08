#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream  ab;
    ab.open("am.txt");
    string s;
    cout<<"enter data you want to send in file"<<endl;
    cin>>s;
    // getline(ab,s);
    ab<<s+"is my name";

}