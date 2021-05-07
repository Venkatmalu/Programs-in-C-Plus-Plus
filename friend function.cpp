#include<iostream>
using namespace std;

class naveen
{
private:
    string lover;
public:
    naveen(string iname)
    {
        lover=iname;
    }
    friend void display(naveen name);
};
void display(naveen name)
{
    cout<<name.lover;
}

int main()
{
    naveen venkat("mohana");
    display(venkat);

    return 0;
}
