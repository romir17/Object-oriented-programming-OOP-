#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
    double x,y;
    public:
    Point()
    {
        x=0.0;
        y=0.0;
    }
    Point(double a,double b)
    {
        x=a;
        y=b;
    }
    void getdata()
    {
        cout<<"Enter the Coordinate"<<endl;
        cout<<"Enter the X-Coordinate"<<endl;
        cin>>x;
        cout<<"Enter the Y-Coordinate"<<endl;
        cin>>y;
    }
    double slope(Point p)
    {
        double temp;
        temp=(p.y-y)/(p.x-x);
        return temp;
    }
    double length(Point p)
    {
    double temp;
    temp=sqrt(pow((p.y-y),2)+ pow((p.x-x),2));
    return temp;
    }
};
int main()
{
    Point p1(30,45),p2(85,100);
    double slope,length;
    cout<<"Welcome to the slope and length of the line calculator"<<endl;
    cout<<"*****************************************************"<<endl;
    slope=p2.slope(p1);
    length=p2.length(p1);
    cout<<"The slope of line is :"<<slope<<endl<<"The length of the line is :"<<length<<endl;
    return 0;
    
}

