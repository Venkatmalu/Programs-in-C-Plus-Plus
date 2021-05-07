#include<iostream>

using namespace std;

int factorial(int);

int main()
{
    int n,result;
    cout<<"Enter a number to find factorial : ";
    cin>>n;
    result=factorial(n);
    cout<<"The factorial of "<<n<<" is : "<<result;
}

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
