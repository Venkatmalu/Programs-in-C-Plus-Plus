#include<iostream>

using namespace std;

class student
{
private:
    int roll_no;
    int getnum()
    {
        return roll_no-7;
    }

public:
    void setrollno(int n)
    {
        roll_no=n;
    }
    void displaynum()
    {
        cout<<"The rool_no is : "<<getnum();
    }
};

int main()
{
    student mani;
    mani.setrollno(1818112);
    mani.displaynum();

    return 0;
}
