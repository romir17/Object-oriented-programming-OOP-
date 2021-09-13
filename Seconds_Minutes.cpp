#include <iostream>
using namespace std;
class Seconds;
class Minutes;
void add(Minutes m, Seconds s);
class Minutes
{
    private:
    int min;
    public:
    Minutes()
    {
        min=0;
    }
    Minutes(int m)
    {
        min=m;
        
    }
    friend void add(Minutes m, Seconds s);
    
};
class Seconds
{
    private:
    int sec;
    public:
    Seconds()
    {
        sec=0;
    }
    Seconds(int s)
    {
        sec=s;
    }
    friend void add(Minutes m, Seconds s);
};
void add(Minutes m,Seconds s)
{
    
    int hr=0;
    while(s.sec>60)
    {
        m.min=m.min+1;
        s.sec=s.sec-60;
    }
    while(m.min>60)
    {
        hr=hr+1;
        m.min=m.min-60;
    }
    cout<<"The clock time is : "<<hr<<" h "<<m.min<<" mins "<<s.sec<<" secs ";
};
    

int main()
{
    Minutes m(60);
    Seconds s(65);
    add(m,s);
    return 0;
}









