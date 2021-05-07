#include<iostream>

using namespace std;

int sum(int,int);

int sum(int a,int b)
{
    cout<<a<<endl;
    cout<<b<<endl;
    return a+b;
}

int main()
{
    int result;
    result=sum(10,5);
    cout<<result;

    return 0;
}
