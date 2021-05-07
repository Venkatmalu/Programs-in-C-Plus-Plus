#include<iostream>

using namespace std;

class student
{
public:
    string name;
    int roll_no;

    void display(int i)
    {
        cout<<i <<" student name is : "<<name<<endl;
        cout<<"Roll number is : "<<roll_no<<endl;
    }
} ;

int main()
{
    student mani,muthu;
    int i=1;

    mani.roll_no=1818112;
    mani.name="mani";
    mani.display(i);

    i++;

    muthu.roll_no=1818115;
    muthu.name="muthu";
    muthu.display(i);

    return 0;
}
