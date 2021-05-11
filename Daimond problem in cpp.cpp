#include<iostream>

using namespace std;

class person
{
public:
    void display()
    {
        cout<<"hi person"<<endl;
    }
};

class son :virtual public person
{
public:
};

class farmer :virtual public person
{
public:
};

class student : public son,public farmer
{
public:

};

int main()
{
    student anil;
    anil.display();

    return 0;
}
