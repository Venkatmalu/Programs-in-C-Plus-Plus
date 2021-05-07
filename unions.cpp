#include<iostream>

using namespace std;

union student
{
    int roll_no;
    float fee;
};

int main()
{
    student mani;
    mani.fee=12345;
    cout<<mani.roll_no;
}
