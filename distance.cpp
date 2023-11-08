#include<iostream>
#include<math.h>
using namespace std;
class S
{
     int x,y;
     public:
     S(int a, int b)
     {
        x=a;
        y=b;
     }
     friend void distance( S , S );
};
void distance(S o1, S o2)
{
    int d;
    d=sqrt(((o2.x-o1.x)*(o2.x-o1.x))+((o2.y-o1.y)*(o2.y-o1.y)));
    cout<<"your distance is "<<d;
}
int main()
{
    S m(9,8);
    S t(15,8);
    distance(m,t);
    return 0;



}
