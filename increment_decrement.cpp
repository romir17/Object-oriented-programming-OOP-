#include <iostream>
using namespace std;

class Number
{
    int val;
    public:
    
    void getdata(int);
    void display();
    Number incr();
    Number decr();
    
};

void Number::getdata(int a) 
{
    cout<<"NUMBER: "<<'\t';
    val = a;
}
void Number::display() 
{
    cout << val<<endl;
}
Number Number::incr() 
{
    Number temp;
    temp.val= val+1;
    cout<<"INCREMENT:"<<'\t';
    return temp;
}
Number Number::decr() 
{
    Number temp;
    temp.val= val-1;
    cout<<"DECREMENT:"<<'\t';
    return temp;
    
}

int main() 
{
  Number n,n2,n3;
  n.getdata(7);
  n.display();
  n2 = n.incr();
  n2.display();
  n3 = n.decr();
  n3.display();
}
