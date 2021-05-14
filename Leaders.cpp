#include<iostream>

using namespace std;

int main()
{
    int arr[100],i,j,num,leaders[100],m=0;
    cout<<"Enter the number of people : ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"The people are : ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
               if(j==num-1)
               {
                   leaders[m++]=arr[i];
               }
            }
            else
            {
                break;
            }
        }
    }
    leaders[m++]=arr[i-1];
    cout<<endl<<endl<<"Leadres in the people are : ";
    for(i=0;i<m;i++)
    {
        cout<<leaders[i]<<" ";
    }
    cout<<endl;
}
