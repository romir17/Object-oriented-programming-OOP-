#include<iostream>
using namespace std;
class names{
    private:
    string name;
    public:
    void getname()
    {
        cout<<"enter your name"<<endl;
        cin>>name;
    }
    void disp()
    {
        cout<<name<<endl;
    }
};
class Details
{
    private:
    string tele_no;
    public:
    void gettele()
    {
        cout<<"enter telephone number"<<endl;
        cin>>tele_no;
    }
    void disp1()
    {
        cout<<tele_no<<endl;
    }
};
class stats:public names,public Details
{
    private:
    float height;
    public:
    void geth()
    {
        cout<<"enter height"<<endl;
        cin>>height;
    }
    void disp2()
    {
        cout<<height<<endl;
    }
};
int main()
{
    stats a;
    a.getname();
    a.gettele();
    a.geth();
    cout<<"details are:"<<endl;
    cout<<"The name is: "<<"\t";
    a.disp();
    cout<<"The telephone number is:"<<"\t";
    a.disp1();
    cout<<"The height is: "<<"\t";
    a.disp2();
    return 0;
}
    
    


