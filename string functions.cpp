#include<iostream>

using namespace std;

int main()
{
    string data("hi,");
    cout<<data<<endl;
    data.append("how are u??");
    cout << data<<endl;
    cout<<data.size()<<endl;
    data.insert(0,"Hey ");
    cout << data<<endl;
    data.insert(7,"mani ");
    cout << data<<endl;

    data.erase(0,4);
    cout << data<<endl;

    return 0;
}
