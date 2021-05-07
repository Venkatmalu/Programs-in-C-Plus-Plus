#include<iostream>
#include<string.h>
using namespace std;

class student{
public:
    string s_name="mani";
    void display();
};

void student :: display()
{
    cout<<student :: s_name;
}

int main()
{
    student muthu;
    muthu.display();

    return 0;
}
