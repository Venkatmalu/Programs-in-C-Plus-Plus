#include<iostream>

using namespace std;

class father
{
public:
    int height;
    void askfather()
    {
        cout<<"ask anything"<<endl;
    }
};

class mother
{
public:
    string name;
    void askmother()
    {
        cout<<"ask a choclate"<<endl;
    }
};

class child : public father,public mother
{
public:
    void ask()
    {
        cout<<"ask to myparents"<<endl;
    }
    void sethn(string iname,int iheight)
    {
        height=iheight;
        name=iname;
    }
    void display()
    {
        cout<<"my name is "<<name<<" my height is "<<height<<endl;
    }

};

int main()
{
    child boy;
    boy.ask();
    boy.sethn("mani",12);
    boy.display();
    boy.askmother();
    boy.askfather();
}
