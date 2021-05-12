#include<iostream>

using namespace std;

class person
{
public:
    string name;
    class address
    {
    public:
        string country;
        string stname;
        int hno;

    };
        address adr;
        void display()
        {
            cout<<name<<endl<<adr.country<<endl<<adr.stname<<endl<<adr.hno<<endl;
        }
};

int main()
{
    person :: address ad;
    person anil;
    anil.name=("mani");
    anil.adr.country=("India");
    anil.adr.stname=("Kudi street");
    anil.adr.hno=(24);
    anil.display();

    return 0;
}
