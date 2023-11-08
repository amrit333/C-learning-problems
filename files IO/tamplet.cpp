#include<iostream>
using namespace std;
template <class t>
class s{
    t f;
    public:
    s(t a)
    {
        f=a;
    }
    void print()
    {
        cout<<"your value is"<<f<<endl;
    }
    
};
int main()
{
    s<int> ob(17);
    ob.print();
    s<float>on1(15.5);
    on1.print();
}
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     // ofstream out("am.txt");

//     // string s="this is my first program wher i work with files";
    
//     // out<<s;
//     ifstream in("am.txt");
//     string s;
//     getline(in,s);
//     cout<<s;

// }