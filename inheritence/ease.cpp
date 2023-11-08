#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata1();
    int get1();
    int get2();
};
void base::setdata1()
{
    data1 = 1;
    data2 = 11;
}
int base::get1()
{
    return data1;
}
int base::get2()
{
    return data2;
}
class drive : public base
{
    int data3;

public:
    void process();
    void print();
};
void drive ::process()
{
    data3 = data2 * get1();
}
void drive ::print()
{
    cout<<"the value of data 3 is "<<data3<<endl;
}
int main()
{
    base ob1;
    ob1.setdata1();
    ob1.get1();
    drive ob2;
    ob2.setdata1();
    ob2.process();
    ob2.print();

    return 0;
}
