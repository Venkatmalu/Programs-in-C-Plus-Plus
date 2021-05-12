#include<iostream>

using namespace std;

int main()
{
    int n,i,arr[100],j;
    cout<<"Enter the number of elements : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        cout<<endl<<"The Maximum number is : "<<arr[n-1]<<endl;

    return 0;
}
