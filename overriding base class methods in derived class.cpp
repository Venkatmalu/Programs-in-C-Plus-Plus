#include<iostream>

using namespace std;

class father
{
public:
    void display()
    {
        cout<<"mani";
    }
};

class child : public father
{
public:
    void display()
    {
        cout<<"mani2";
    }
};

int main()
{
    child anil;
    anil.display();
}
