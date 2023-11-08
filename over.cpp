#include <iostream>
using namespace std;
class over
{
    int x, y, z;

public:
    over(int a, int b)
    {
        x = a;
        y = b;
    }
    over(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void print()
    {
        cout << "your x = " << x << "your y = " << y << "your z = " << z << endl;
    }
};
int main()
{
    over s(56, 67);
    s.print();
    over t(15, 16, 17);
    t.print();
    return 0;
}