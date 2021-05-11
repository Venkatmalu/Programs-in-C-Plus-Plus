#include<iostream>

using namespace std;

class father
{
protected:
    int age;
    father()
    {
        cout<<"father"<<endl;
    }
    void display1()
    {
        cout<<"age= "<<age<<endl;
    }
};

class mother
{
protected:
    string name;
    mother()
    {
        cout<<"mother"<<endl;
    }
    void display2()
    {
        cout<<"namem= "<<name<<endl;
    }
};

class child : public father,public mother
{
public:
    child(int x,string iname) : father(),mother()
    {
        age=x;
        name=iname;
        cout<<"child"<<endl;
    }
    void display()
    {
        cout<<"age1= "<<age<<endl;
        cout<<"name1= "<<name<<endl;
        display1();
        display2();
    }
};

int main()
{
    child anil={24,"mani"};
    anil.display();
    return 0;
}
