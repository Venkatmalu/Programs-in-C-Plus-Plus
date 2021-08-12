#include<iostream>

using namespace std;

int fact(int n)
{
    int res;
    if(n==0)
    {
        res=1;
    }
    else
    {
        res=n*fact(n-1);
    }
    return res;
}

int main()
{
    int n;
    int res = 0;
    cin>>n;
    int temp = n;
    while(n>0)
    {
        int temp1 = n%10;
        res = res + fact(temp1);
        n = n/10;
    }
    if(temp == res)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
