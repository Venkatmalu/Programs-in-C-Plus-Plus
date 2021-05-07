#include<iostream>
using namespace std;
int main()
{
    int a=100;
    bool b="b";
    int *aptr;
    bool *bptr;

    aptr=&a;
    bptr=&b;

    cout<<a<<"--->"<<*aptr<<endl;

    cout<<b<<"--->"<<*bptr<<endl;

    return 0;
}
