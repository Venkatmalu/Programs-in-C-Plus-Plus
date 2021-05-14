#include<iostream>

using namespace std;

int main()
{
    int arr[100],num,i,j,target,count;
    cout<<"Enter the number of elements : ";
    cin>>num;
    cout<<"Enter the increasing sorted elements : ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the target value : ";
    cin>>target;
    for(i=0;i<num;i++)
    {
        count=0;
        if(arr[i]==target)
        {
            cout<<endl<<"The output is : "<<i;
            count++;
            break;
        }
    }
    for(i=0;i<num;i++)
    {
        if(count==0)
        {
            if((arr[i]+1)==target)
            {
                cout<<endl<<"The output is : "<<i+1;
                break;
            }
            else
            {
                if(target==0)
                {
                    cout<<endl<<"The output is : "<<"0";
                    break;
                }
            }
        }
    }
    cout<<endl;
}
