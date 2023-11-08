#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
base(){
    a=6;
}
};
class drive1 : public base{
        protected:
        int b;
        public:
        drive1(){
            b=7;
        }

};
class drive2 : public drive1{
        public:
        void print(){
            cout<<"value of a is = "<<a<<" value of B is = "<<b;
        }
};
int main()
{
    drive2 ob1;
    ob1.print();
    return 0;
}