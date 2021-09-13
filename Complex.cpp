#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
   complex(int a, int b)

    {
    real=a;
    imag=b;
    }
    complex(complex &c)
    {
        real=c.real;
        imag=c.imag;

    }
    void set_data()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void get_data()
    {
        cout<<"Enter real and imaginary part of the complex number :"<<endl;
        cin>>real>>imag;
        cout<<"the complex number are: "<<real<<"+"<<imag<<"i"<<"\t";
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    complex add(complex x)
    {
        complex temp;
        temp.real=x.real+real;
        temp.imag=x.imag+imag;
        return temp;
    }
    complex sub(complex x)
    {
        complex temp;
        temp.real=x.real-real;
        temp.imag=x.imag-imag;
        return temp;
    }
};
int main()
{
    complex c2(7,10),c3(c2),c1,c4;
    c3.get_data();
    c2.set_data();
    cout<<"**********************************************"<<endl;
    cout<<"Sum of two complex numbers is :"<<endl;
    c1=c2.add(c3);
    c1.display();
    cout<<"**********************************************"<<endl;
    cout<<"Subtraction of two complex numbers is :"<<endl;
    c4=c2.sub(c3);
    c4.display();


    return 0;

}






