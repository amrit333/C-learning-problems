#include<iostream>
using namespace std ;
class detail
{
    protected:
    int roll;
    public:
    detail(){}
    detail(int a)
    {
        roll = a;
    }  
    void print_roll()
    {
        cout<<" your roll no. is = "<<roll<<endl;
    } 
};
class exam : virtual public detail{
    protected:
    
    float marks;
    public:
    // exam()
    // {
        
    // }
    exam(float x)
    {
       marks =x; 
    }
    void print_marks()
    {
        cout<<"your marks = "<<marks<<endl;
    }
};
class sports : virtual public detail{
    protected:
    float score;
    public:
    // sports(){}
    sports(float f)
    {
        score = f;
    }
    void printscore()
    {
        cout<<"your score is = "<<score<<endl;
    }
};
class khatam : public sports,public exam
{
    protected:
    float results;
    public:
    //  khatam()
    //  {
    //     results= marks+score;
    //  }
    void print_result()
    {
        print_roll();
        print_marks();
        printscore();
        results=marks+ sprots;
        cout<<"your total is "<<results<<endl;
    }
};
int main()
{
    detail m1(15);
    exam m2(76.0);
    sports m3(30);
    khatam akk;
    akk.print_result();
    
    return 0;
}
