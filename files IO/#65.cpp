/*using templet with perameter*/
#include<iostream>
using namespace std;
template<class t1=int ,class  t2=float>
class s{
    public:
    t1 data;
    t2 data2;
    s(t1 a1,t2 b1)
    {
        data=a1;
        data2=b1;
    }
    void print()
    {
        cout<<this->data<<endl<<this->data2<<endl;
    }
};
int main()
{
    s<> o(13,13.5);
    o.print();
    s<int , char> o1(67,'f');
    o1.print();

}