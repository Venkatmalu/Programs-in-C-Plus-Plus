#include<iostream>

using namespace std;

class student
{
public:
    string *name;
    int age;
    student(string name,int age)
    {
        this->name=new string(name);
        this->age=age;
    }

    student(const student &s)
    {
        name=new string(*s.name);
        age=s.age;
    }

    void set1(string name,int age)
    {
        *(this->name)=name;
        this->age=age;
    }

    void display()
    {
        cout<<"Name is "<<*name<<" Age is "<<age<<endl;
    }
};

int main()
{
    student anil={"mani",25};
    anil.display();

    student duplicateanil=anil;
    duplicateanil.display();

    anil.set1("maniraj",30);
    anil.display();
    duplicateanil.display();

    return 0;
}
