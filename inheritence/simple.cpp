#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    float salary;
    employee(){}
    employee(int idd){
        id=idd;
        salary =70.0;
    }
};
class eng : public employee{
    public:
    
     eng(int idd){
        id =idd;
        salary=89.00;

     }
     int l=9;
     void print()
     {
        cout<<"id of engineer is "<<id;
     }
     
};
int main()
{
    employee a1(1),a2(2);
    cout<<"salary of employee is"<<a1.salary<<endl;
    cout<<"salary of second employee is "<<a2.salary<<endl;
    eng m1(5);
    // cout<<"id of engineer is"<<m1.id<<endl;
    m1.print();
    cout<<"programm use "<<m1.l<<"th language";
    cout<<"programm took"<<m1.salary<<"salary";
    return 0;

}