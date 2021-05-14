#include<iostream>

using namespace std;

int main()
{
    int num,temp,digit,count=0;
    cout<<"Enter the number : ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        if(temp%10==0)
        {
            count=1;
            break;
        }
        else
        {
            digit=num%10;
            if(temp%digit==0)
            {
              count++;
            }
            num=num/10;
        }
    }
    cout<<endl<<"The output is : "<<count<<endl;
}
