#include <iostream>
using namespace std;
class shape
{
    
    public:
    double l,b;
    void get_data()
    {
        cin>>l;
        cout<<endl;
        cin>>b;
    }
    virtual void display_area()
    {
        
    }
};
class triangle:public shape
{
    public:void display_area ()
    {
        cout<<"AREA OF TRIANGLE IS  : "<<0.5*(l*b)<<endl;
    }
};
class rectangle:public shape
{
    public:void display_area ()
    {
        cout<<"AREA OF RECTANGLE IS  : "<<l*b<<endl;
    }
};
int main()
{
    shape *s;
    triangle tri;
    rectangle rec;
    
    cout<<"WELCOME TO THE SHAPE CALCULATOR"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"ENTER THE BASE AND HEIGHT OF THE TRIANGLE :"<<endl;
    tri.get_data();
    s=&tri;
    s->display_area();
    cout<<"**************************************"<<endl;
    cout<<"ENTER THE LENGTH AND BREADTH OF THE RECTANGLE :"<<endl;
    rec.get_data();
    s=&rec;
    s->display_area();
    cout<<"**************************************"<<endl;
    return 0;

}








