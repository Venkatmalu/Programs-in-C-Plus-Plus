#include<iostream>

using namespace std;

struct student
{
    int roll_no;
    string name;
};
void show(student s);
void dis(student *s);
int main()
{

    student mani={1234,"balu"};
    show(mani);
    dis(&mani);
    return 0;
}

void show(student s)
{
    cout<<s.roll_no;
    cout<<s.name;
}

void dis(student *s)
{
    cout<<s->roll_no<<endl;
    cout<<s->name;
}
