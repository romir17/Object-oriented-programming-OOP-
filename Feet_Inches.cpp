#include <iostream>
using namespace std;
class Distance{
    private:
    int feet;
    int inch;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int a,int b)
    {
        feet=a;
        inch=b;
    }
    void getdata()
    {
        cout<<"enter the distance in feet"<<endl;
        cin>>feet;
        cout<<endl<<"enter distance in inches"<<endl;
        cin>>inch;
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet=feet+d.feet;
        temp.inch=inch+d.inch;
        temp.feet = temp.feet + (temp.inch/ 12);
		temp.inch =temp.inch % 12;
        return temp;
    }
    void display()
    {
        cout<<"Distance is feet= "<<feet<<", inches= "<<inch<<endl;
    }
};
int main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=d1+d2;
    d3.display();
    return 0;
}




