#include<iostream>

using namespace std;

struct address
{
  int house_no;
  string street_name;
};

struct student
{
    int roll_no;
    string name;
    address addr;
};

int main()
{

    student mani;
    mani.roll_no=12345;
    mani.name="venkat";
    mani.addr.house_no=2;
    mani.addr.street_name="anna nagar";

    cout<<mani.roll_no<<endl;
    cout<<mani.name<<endl;
    cout<<mani.addr.house_no<<endl;
    cout<<mani.addr.street_name;
}
