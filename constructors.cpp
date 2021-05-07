#include<iostream>

using namespace std;

class student
{
private:
    string name;
    int age;
public:
    student()
    {
        cout<<"default constructor"<<endl;
        name="mani";
        age=20;
    }
    student(string iname)
    {
        cout<<endl<<"constructor-1"<<endl;
        name="raju";
        age=40;
    }
     student(int iage)
    {
        cout<<endl<<"constructor-2"<<endl;
        name="muthu";
        age=23;
    }
    student(string iname,int iage)
    {
        cout<<endl<<"constructor-3"<<endl;
        name="malu";
        age=21;
    }
    void display()
    {
        cout<<name<<endl<<age<<endl;
    }
};

int main()
{
    student anil;
    anil.display();

    student anu("mani");
    anu.display();

    student muthu(20);
    muthu.display();

    student malu("malu",21);
    malu.display();
}
