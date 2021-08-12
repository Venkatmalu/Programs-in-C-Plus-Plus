#include<iostream>

using namespace std;

int main()
{
    int p1,p2,p3,q,r,e;
    cout<<"Enter the values : ";
    cin>>p1>>p2>>p3>>q>>e>>r;
    int x = (e-r+(2*q)-p1-p2-p3)/3;
    cout<<endl<<"The first problem solved employees are : "<<x+(p1-q)+(p3-q)+q<<endl;
    cout<<"The Employees solved exactly 1 question are : "<<x*3;
}
