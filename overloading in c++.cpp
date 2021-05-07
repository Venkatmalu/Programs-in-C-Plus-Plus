#include<iostream>

using namespace std;

void display();
void display(int n);

int main()
{
    display();
    display(5);

    return 0;
}

void display()
{
    cout<<"hi,buddy"<<endl;
}

void display(int n)
{
    cout<<n;
}
