#include<iostream>

using namespace std;

class student
{
private:
    int age;
public:
    void setage(int iage)
    {
        age=iage;
    }
    void display()
    {
        cout<<this->age<<endl;
    }
};

int main()
{
    student anil;
    anil.setage(24);
    anil.display();
}
