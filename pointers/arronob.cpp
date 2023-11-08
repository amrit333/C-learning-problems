#include<iostream>
using namespace std;
class shop
{
    int id;
    float price;
    public:
    void getdata(int a, float b)
    {
        id=a;
        price=b;
    }

    void print();
};
void shop ::print()
{
    cout<<"your id is = "<<id<<endl;
    cout<<"your price is = "<<price<<endl;
}
int main()
{
    shop *ptr = new shop[3];
    ptr->getdata(15,7.03);
    ptr->print();
    (ptr+1)->getdata(76,11.1);
    (ptr+1)->print();
    (ptr+2)->getdata(16,18.90);
    (ptr+2)->print();

}