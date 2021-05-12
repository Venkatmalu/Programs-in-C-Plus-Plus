#include<iostream>

using namespace std;

int main()
{
    int number,count=0,i;
    cout<<"Enter the number : ";
    cin>>number;
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
        }

    }
    if(count==2)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
}
