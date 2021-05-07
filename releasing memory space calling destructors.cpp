#include<iostream>

using namespace std;

class student
{
private:
    string *name;
    int *age;

public:
    student(string iname,int iage)
    {
        cout<<"constructor called"<<endl;
        name=new string;
        age =new int;

        *name=iname;
        *age=iage;
    }
    ~student()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{

    return 0;
}

