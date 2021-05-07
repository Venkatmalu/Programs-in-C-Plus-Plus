#include<iostream>

using namespace std;

class student
{
protected:
    string name;
public:
    void setname(string iname)
    {
        name=iname;
    }
    void display()
    {
        cout<<name;
    }
};

class room : public student
{
   public:
       void dispaly()
       {
           cout<<name;
       }
};

int main()
{
    room anil;
    anil.setname("mani");
    anil.display();
     room mani;
    mani.setname("velu");
    mani.display();

    return 0;
}
