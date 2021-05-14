#include<iostream>

using namespace std;

int main()
{
    int arr[100],i,num,count=0,count1=0;
    cout<<"Enter the number of binary numbers : ";
    cin>>num;
    cout<<"Enter the binary numbers : ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"The binary numbers are : ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]!=0)
        {
            count++;
        }
        if(arr[i]==0&&count>count1 || i==(num-1)&&count>count1)
        {
            count1=count;
            count=0;
        }
    }
    cout<<endl<<"the output is : "<<count1;
}
