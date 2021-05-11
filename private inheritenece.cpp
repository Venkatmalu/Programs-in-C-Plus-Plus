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

class child : private father
{
public:
    void setboyname(string iname)
    {
        setname(iname);
    }
    void display()
    {
      display1();
    }
};

int main()
{
    child boy;
    boy.display1();
    boy.setboyname("mani");
    boy.display();
}


