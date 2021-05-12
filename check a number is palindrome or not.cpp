#include<iostream>

using namespace std;

int main()
{
    int num,i,sum=0,temp,x;
    cout<<"Enter the number : ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        x=num%10;
        sum=sum*10+x;
        num=num/10;
    }
    num=temp;
    if(num==sum)
    {
        cout<<"It is a palindrome";
    }
    else
    {
        cout<<"It is a not palindrome";
    }
}
