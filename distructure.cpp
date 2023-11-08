#include<iostream>
using namespace std;
int count =0;
class S{
    public:
    S(){
        count++;
        cout<<"your constructor is called "<<count<<"th time"<<endl;
    }
    ~S(){
        cout<<"you distructor si called "<<count<<"th time"<<endl;
        count--;
    }
};
int main()
{
    cout<<"our starting in main"<<endl;
    S ob1;
    {
        cout<<"enteri in a Block"<<endl;
        S ob2;
        S ob3;

    }
    cout<<"exit from main"<<endl;
    return 0;
}