#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// {
//     ofstream ab;
//     string a="this file doesn't look nice";
//     ab.open("am.txt");
//     ab<<a;
//     fclose;
    // cout<<a;g+
    // cout<<endl;
    ifstream in;
    in.open("am.txt");
    string am;
    getline(in,am);
    cout<<am;

    
}