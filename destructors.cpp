#include<iostream>

using namespace std;

class student
{
public:
    student()
    {
        cout<<"constructor called"<<endl;
    }
    ~student()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    student *anil;
    anil=new student();
    delete anil;

    return 0;
}
