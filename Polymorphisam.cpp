#include<iostream>

using namespace std;

class person
{
public:
    virtual void display()
    {
        cout<<"hi person"<<endl;
    }
};

class son : public person
{
public:
    void display()
    {
        cout<<"hi son"<<endl;
    }
};

class farmer : public person
{
public:
    void display()
    {
        cout<<"hi farmer"<<endl;
    }
};

    void thisis(person &p)
{
    p.display();
}

int main()
{
    farmer anil;
    thisis(anil);
    son mani;
    thisis(mani);

    return 0;
}
