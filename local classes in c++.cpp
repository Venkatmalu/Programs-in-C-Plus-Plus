#include<iostream>

using namespace std;

void fun()
{
    class student
    {
    public:
        string name;
        int age;

        void display()
        {
            cout<<name<<endl<<age<<endl;
        }
    };
        student obj;
        obj.name=("mani");
        obj.age=(25);
        obj.display();
}
int main()
{
    fun();

    return 0;
}
