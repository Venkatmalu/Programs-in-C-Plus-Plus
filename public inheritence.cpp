#include<iostream>

using namespace std;

class father
{
protected:
    string name;
public:
    void setname(string iname)
    {
        name=iname;
    }
    void display1()
    {
        cout<<name<<endl;
    }
};

class child : public father
{
public:
    void display()
    {
        cout<<name<<endl;
    }

};

int main()
{
    father girl;
    child boy;
    boy.setname("priya");
    boy.display1();
    boy.display();
}
