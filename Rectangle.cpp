
#include <iostream>
using namespace std;

class rectangle
{
    private:
    double l,b;
    public:
    void getdata()
    {
        cout<<endl<<"Enter the length and breadth"<<endl;
        cout<<"ENTER THE LENGTH : "<<"\t";
        cin>>l;
        cout<<"ENTER THE BREADTH : "<<"\t";
        cin>>b;
    }
    void display()
    {
        cout<<l<<endl<<b;
    }
    double area()
    {
        double temp;
        temp=l*b;
        return temp;
    }
    double perimeter()
    {
        double temp;
        temp=2*(l+b);
        return temp;
    }
    
};

int main()
{
    rectangle a1;
    double area,perimeter;
    cout<<"WELCOME TO AREA & PERIMETER CALCULATOR"<<endl;
    cout<<"*********************************************";
    a1.getdata();
    area=a1.area();
    perimeter=a1.perimeter();
    cout<<"**********************************************"<<endl;
    cout<<"THE AREA IS : "<<area<<endl;
    cout<<"**********************************************"<<endl;
    cout<<"THE PERIMETER IS : "<<perimeter<<endl;
    cout<<"**********************************************"<<endl;
    cout<<"THANK YOU"<<endl;
   
    return 0;
}




